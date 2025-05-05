@interface IESCKLayoutBaseRule : NSObject
@property (nonatomic) IESLiveLayoutRoomContainer provider;
@property (nonatomic) <IESCKLayoutRuleDelegateProtocol> ruleDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindProvider:;
- (void)handleOrientationChanged:;
- (id)layoutView:;
- (id)ruleDelegate;
- (void)setRuleDelegate:;
- (void)setProvider:;
- (id)provider;
- (void).cxx_destruct;
- (id)globalContext;
@end
