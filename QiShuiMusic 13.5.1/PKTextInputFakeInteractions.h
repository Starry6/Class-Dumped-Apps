@interface PKTextInputFakeInteractions : NSObject
- (void)_attachToView:;
+ (id)sharedInstance;
+ (void)attachFakeInteractionToViewIfNecessary:;
@end
