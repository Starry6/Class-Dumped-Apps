@interface IESLiveSaaSMatchUserInfo : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSTeamInfo userTeamInfo;
@property (nonatomic) BOOL hasUserTeamInfo;
@property (nonatomic) NSDictionary userQuizInfo;
@property (nonatomic) Q userQuizInfo_Count;
@property (nonatomic) BOOL isActivityAccount;
@property (nonatomic) BOOL needRetry;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasUserTeamInfo;
- (unsigned long long)userQuizInfo_Count;
+ (id)userTeamInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
