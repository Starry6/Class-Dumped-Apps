@interface IESLiveSaaSMonitorContext : NSObject
@property (nonatomic) NSString enterRoomActionType;
@property (nonatomic) NSString enterRoomType;
@property (nonatomic) double segueStartTime;
@property (nonatomic) NSNumber clickLiveTime;
- (id)clickLiveTime;
- (id)enterRoomActionType;
- (id)enterRoomType;
- (double)segueStartTime;
- (void)setClickLiveTime:;
- (void)setEnterRoomActionType:;
- (void)setEnterRoomType:;
- (void)setSegueStartTime:;
- (void).cxx_destruct;
@end
