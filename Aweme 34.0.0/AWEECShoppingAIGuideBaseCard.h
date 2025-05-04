@interface AWEECShoppingAIGuideBaseCard : UIView
@property (nonatomic) NSNumber marginTop;
@property (nonatomic) AWEECShoppingAIGuideMessageGroupViewModel weakGroupMessageViewModel;
@property (nonatomic) AWEECShoppingAIGuideContext context;
@property (nonatomic) <AWEECShoppingAIGuideBaseCardDelegate> delegate;
- (id)initWithModel:context:;
- (void)setupUIWithModel:;
- (void)setWeakGroupMessageViewModel:;
- (id)weakGroupMessageViewModel;
- (id)delegate;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
- (id)marginTop;
- (void)setMarginTop:;
@end
