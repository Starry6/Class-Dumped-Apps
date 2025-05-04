@interface AWELiveRecordMissionModel : AWEBaseApiModel
@property (nonatomic) NSString liveSecUid;
@property (nonatomic) NSString liveStartTime;
@property (nonatomic) NSString liveEndTime;
- (id)liveStartTime;
- (void)setLiveStartTime:;
- (id)liveSecUid;
- (void)setLiveSecUid:;
- (id)liveEndTime;
- (void)setLiveEndTime:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
