// shock_wave.c.inc

f32 D_8032F420[] = { 1.9f, 2.4f, 4.0f, 4.8f };

void bhv_bowser_shock_wave_loop(void) {
    f32 sp2C, sp28, sp24, sp20;
    s16 sp1E = 35;
    o->oBowserShockWaveUnkF4 = o->oTimer * 5;
    cur_obj_scale(o->oBowserShockWaveUnkF4);
    if (gGlobalTimer % 3)
        o->oOpacity -= 1;
    if (o->oTimer > sp1E)
        o->oOpacity -= 5;
    if (o->oOpacity <= 0)
        obj_mark_for_deletion(o);
    if (o->oTimer < sp1E && mario_is_in_air_action() == 0) {
        sp2C = o->oBowserShockWaveUnkF4 * D_8032F420[0];
        sp28 = o->oBowserShockWaveUnkF4 * D_8032F420[1];
        sp24 = o->oBowserShockWaveUnkF4 * D_8032F420[2];
        sp20 = o->oBowserShockWaveUnkF4 * D_8032F420[3];
        if ((sp2C < o->oDistanceToMario && o->oDistanceToMario < sp28)
            || (sp24 < o->oDistanceToMario && o->oDistanceToMario < sp20))
            gMarioObject->oInteractStatus |= INT_STATUS_HIT_BY_SHOCKWAVE;
    }
}

void bhv_bowser_shock_wave2_loop(void) {
    f32 sp2C, sp28, sp24, sp20;
    s16 sp1E = 35;
    o->oBowserShockWaveUnkF4 = o->oTimer * 5;
    cur_obj_scale(o->oBowserShockWaveUnkF4);
    if (o->oTimer <= 3) {
        o->oForwardVel = 100;
        cur_obj_compute_vel_xz();
    } else {
        o->oForwardVel = 0;
    }
    if (gGlobalTimer % 3)
        o->oOpacity -= 1;
    if (o->oTimer > sp1E)
        o->oOpacity -= 5;
    if (o->oOpacity <= 0)
        obj_mark_for_deletion(o);
    if (o->oTimer < sp1E && mario_is_in_air_action() == 0) {
        sp2C = o->oBowserShockWaveUnkF4 * D_8032F420[0];
        sp28 = o->oBowserShockWaveUnkF4 * D_8032F420[1];
        sp24 = o->oBowserShockWaveUnkF4 * D_8032F420[2];
        sp20 = o->oBowserShockWaveUnkF4 * D_8032F420[3];
        if ((sp2C < o->oDistanceToMario && o->oDistanceToMario < sp28)
            || (sp24 < o->oDistanceToMario && o->oDistanceToMario < sp20))
            gMarioObject->oInteractStatus |= INT_STATUS_HIT_BY_SHOCKWAVE;
    }
}
