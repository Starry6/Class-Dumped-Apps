@interface IESIMLiveRecordMissionModel : IESIMBaseApiModel
@property (nonatomic) NSString liveSecUid;
@property (nonatomic) NSString liveStartTime;
@property (nonatomic) NSString liveEndTime;
- (void)setLiveEndTime:;
- (id)liveEndTime;
- (id)liveSecUid;
- (id)liveStartTime;
- (void)setLiveSecUid:;
- (void)setLiveStartTime:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
