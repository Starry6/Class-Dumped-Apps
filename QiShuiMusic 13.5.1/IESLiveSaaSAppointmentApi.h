@interface IESLiveSaaSAppointmentApi : HTSLiveApi
- (void)hostSubscribeAppointmentWithSubscribe:hostFrom:groupId:appointmentId:source:hostAnchorUserId:completion:;
- (void)publishAppointmentWithUserID:completion:;
- (void)sendPositionWithRoomID:itemID:syncVesion:position:completion:;
- (void)unpublishAppointmentWithUserID:completion:;
@end
