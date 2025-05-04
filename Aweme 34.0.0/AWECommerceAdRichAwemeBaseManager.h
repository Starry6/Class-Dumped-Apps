@interface AWECommerceAdRichAwemeBaseManager : NSObject
@property (nonatomic) NSObject<AWECommerceAdRichAwemeBaseManager> manager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWECommerceComponentContext> commerceContext;
- (id)commerceContext;
- (void)setCommerceContext:;
- (void)enterWithInteractionViewController:model:;
- (BOOL)isRichAwemeManuallySlide:;
- (void)setManager:;
- (void)resume;
- (void)prepareForDisplay;
- (id)manager;
- (void).cxx_destruct;
- (void)reset;
- (void)pause;
- (void)leave;
+ (BOOL)canShowComponentWithContext:;
+ (BOOL)feedCanAutoPlayWithPresentedViewController:;
+ (Class)provideManager;
+ (unsigned long long)albumSlideAutoReplayInAdRichAweme:;
@end
