@interface AWERequestChallengeResponse : AWEBaseApiModel
@property (nonatomic) BOOL isPreViewChallenge;
@property (nonatomic) AWEChallengeModel challenge;
@property (nonatomic) NSArray cardModels;
@property (nonatomic) NSArray slideList;
@property (nonatomic) NSString slideTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)slideTitle;
- (id)slideList;
- (id)cardModels;
- (void)setCardModels:;
- (BOOL)isPreViewChallenge;
- (void)setSlideList:;
- (void)setSlideTitle:;
- (void)setIsPreViewChallenge:;
- (id)challenge;
- (void)setChallenge:;
- (void).cxx_destruct;
+ (id)slideListJSONTransformer;
+ (id)cardModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
