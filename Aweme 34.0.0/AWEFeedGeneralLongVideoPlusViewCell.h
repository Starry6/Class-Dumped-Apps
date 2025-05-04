@interface AWEFeedGeneralLongVideoPlusViewCell : AWEFeedGeneralViewCell
- (Class)interactionControllerFactory;
- (Class)viewControllerClassType;
- (BOOL)shouldPreventVideoPause;
- (void)pause;
+ (id)reuseIdentifierWithMediaType:isFakeAweme:;
@end
