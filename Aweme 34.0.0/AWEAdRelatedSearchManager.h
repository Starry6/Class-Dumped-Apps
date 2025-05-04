@interface AWEAdRelatedSearchManager : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> interactionController;
@property (nonatomic) double currentWatchTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWECommerceComponentContext> commerceContext;
- (id)aweme;
- (void)setAweme:;
- (id)commerceContext;
- (void)setCommerceContext:;
- (void)setConnectionWithInteractionViewController:model:;
- (void)addHandlerByInteractionContext;
- (void)setCurrentWatchTime:;
- (double)currentWatchTime;
- (void)setInteractionController:;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;
- (id)interactionController;
+ (BOOL)canShowComponentWithContext:;
@end
