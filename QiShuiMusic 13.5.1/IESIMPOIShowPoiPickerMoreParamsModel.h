@interface IESIMPOIShowPoiPickerMoreParamsModel : NSObject
@property (nonatomic) NSString referString;
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSString activityDescription;
@property (nonatomic) NSString activityUrl;
@property (nonatomic) NSString activityFenseType;
@property (nonatomic) NSArray AIRecommendPOIs;
@property (nonatomic) NSArray topics;
@property (nonatomic) NSString activitySource;
@property (nonatomic) NSString activityID;
@property (nonatomic) NSString challengeID;
@property (nonatomic) NSString creationID;
- (id)AIRecommendPOIs;
- (void)setActivityUrl:;
- (id)awemeID;
- (void)setReferString:;
- (id)activityFenseType;
- (id)activitySource;
- (id)activityUrl;
- (id)creationID;
- (id)referString;
- (void)setAIRecommendPOIs:;
- (void)setActivityFenseType:;
- (void)setActivitySource:;
- (void)setAwemeID:;
- (void)setCreationID:;
- (void)setTopics:;
- (id)topics;
- (id)activityDescription;
- (void).cxx_destruct;
- (void)setActivityDescription:;
- (id)activityID;
- (void)setActivityID:;
- (id)challengeID;
- (void)setChallengeID:;
@end
