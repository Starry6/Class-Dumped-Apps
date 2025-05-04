@interface AWEVideoControlPlugin : NSObject
@property (nonatomic) <AWEAwemePlayInteractionCommerceDelegate> interactionViewControllerDelegate;
- (void)setInteractionViewControllerDelegate:;
- (void)handleVideoPlayNotification:;
- (id)interactionViewControllerDelegate;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
