@interface AWEIpadLongpressService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createLongPressModalViewControllerWithTriggerBlock:dismissBlock:referString:;
- (double)widthWithIMSectionContent:;
- (double)widthWithCollectionViewSize:;
- (BOOL)enableLongPressAlertOptimize;
- (void)performLongPressOptimizeBlockIfNeeded:;
@end
