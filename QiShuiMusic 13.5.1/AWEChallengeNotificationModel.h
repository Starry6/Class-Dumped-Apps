@interface AWEChallengeNotificationModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) IESIMChallengeModel challenge;
@property (nonatomic) double contentW;
@property (nonatomic) double contentH;
- (double)contentH;
- (double)contentW;
- (void)setContentH:;
- (void)setContentW:;
- (id)content;
- (void)setChallenge:;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)challenge;
+ (id)challengeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
