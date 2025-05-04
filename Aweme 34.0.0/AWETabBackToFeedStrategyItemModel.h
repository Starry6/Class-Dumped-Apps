@interface AWETabBackToFeedStrategyItemModel : MTLModel
@property (nonatomic) NSString tabID;
@property (nonatomic) q playerProgress;
@property (nonatomic) q triggerCount;
@property (nonatomic) q strategy;
@property (nonatomic) q guideType;
@property (nonatomic) NSString guideDesc;
@property (nonatomic) NSString guideTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGuideDesc:;
- (id)guideDesc;
- (void)setTabID:;
- (long long)guideType;
- (void)setGuideType:;
- (id)guideTitle;
- (void)setGuideTitle:;
- (long long)playerProgress;
- (void)setPlayerProgress:;
- (long long)strategy;
- (void).cxx_destruct;
- (long long)triggerCount;
- (void)setTriggerCount:;
- (void)setStrategy:;
- (id)tabID;
+ (id)JSONKeyPathsByPropertyKey;
@end
