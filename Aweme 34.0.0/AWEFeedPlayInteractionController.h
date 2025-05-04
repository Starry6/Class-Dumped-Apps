@interface AWEFeedPlayInteractionController : AWEBaseController
- (id)aAWEPadModuleAdapter;
- (void)beginRefresh;
- (void)refreshCompletion:error:needAnimation:;
- (id)currentReferString;
+ (Class)aAWEPadModuleAdapterClass;
@end
