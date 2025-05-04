@interface AWEIMStreakPetElfParentingDataModel : NSObject
@property (nonatomic) q petId;
@property (nonatomic) q stage;
@property (nonatomic) BOOL isMax;
@property (nonatomic) NSDictionary cardInfo;
@property (nonatomic) q dataVersion;
@property (nonatomic) q acceptMsgID;
@property (nonatomic) double setDefaultStageNoticeTimestamp;
@property (nonatomic) double feAchieveUpdateTime;
@property (nonatomic) double serverAchieveUpdateTime;
- (id)toJSONDictionary;
- (long long)petId;
- (BOOL)isMax;
- (long long)acceptMsgID;
- (double)setDefaultStageNoticeTimestamp;
- (double)feAchieveUpdateTime;
- (double)serverAchieveUpdateTime;
- (long long)stage;
- (long long)dataVersion;
- (void).cxx_destruct;
- (id)initWithDict:;
- (id)cardInfo;
@end
