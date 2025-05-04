@interface AWEIMGreetCardInfo : AWEBaseApiModel
@property (nonatomic) AWEUserModel user;
@property (nonatomic) NSArray userPosts;
@property (nonatomic) q consecutiveChatDays;
@property (nonatomic) BOOL hasVisitedMyProfile;
@property (nonatomic) BOOL hasRecentPosts;
@property (nonatomic) NSString recommendReason;
@property (nonatomic) BOOL isValid;
- (void)setRecommendReason:;
- (id)recommendReason;
- (id)userPosts;
- (long long)consecutiveChatDays;
- (BOOL)hasVisitedMyProfile;
- (void)setUserPosts:;
- (void)setConsecutiveChatDays:;
- (void)setHasVisitedMyProfile:;
- (BOOL)hasRecentPosts;
- (void)setHasRecentPosts:;
- (id)user;
- (void)setUser:;
- (BOOL)isValid;
- (void)setIsValid:;
- (void).cxx_destruct;
+ (id)userJSONTransformer;
+ (id)userPostsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
