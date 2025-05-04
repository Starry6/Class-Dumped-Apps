@interface AWEVideoInteractInfo : MTLModel
@property (nonatomic) NSString activityName;
@property (nonatomic) q userState;
@property (nonatomic) NSString schema;
@property (nonatomic) NSArray activityBtnList;
@property (nonatomic) double nowTimeStamp;
@property (nonatomic) NSDictionary eventData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUserState:;
- (id)activityBtnList;
- (void)setActivityBtnList:;
- (double)nowTimeStamp;
- (void)setNowTimeStamp:;
- (id)schema;
- (void)setSchema:;
- (id)eventData;
- (void).cxx_destruct;
- (void)setEventData:;
- (id)activityName;
- (long long)userState;
- (void)setActivityName:;
+ (id)activityBtnListJSONTransformer;
+ (id)eventDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
