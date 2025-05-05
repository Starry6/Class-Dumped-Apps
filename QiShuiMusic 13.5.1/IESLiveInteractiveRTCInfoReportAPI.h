@interface IESLiveInteractiveRTCInfoReportAPI : HTSLiveApi
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
- (id)initWithRoomModel:;
- (void)reportRTCInfoWith:source:callback:;
- (id)roomModel;
- (void)setRoomModel:;
- (id)transformReportSource:;
- (void).cxx_destruct;
@end
