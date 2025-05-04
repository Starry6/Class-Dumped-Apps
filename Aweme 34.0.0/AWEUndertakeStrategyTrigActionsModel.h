@interface AWEUndertakeStrategyTrigActionsModel : MTLModel
@property (nonatomic) AWEUndertakeStrategySwipeTrigAction swipeTrigger;
@property (nonatomic) AWEUndertakeStrategyLoginTrigAction loginTrigger;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)swipeTrigger;
- (id)loginTrigger;
- (void)setSwipeTrigger:;
- (void)setLoginTrigger:;
- (void).cxx_destruct;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
