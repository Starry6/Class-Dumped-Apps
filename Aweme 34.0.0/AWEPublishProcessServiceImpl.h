@interface AWEPublishProcessServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getUniversalPublishProgressView;
- (id)createPublishCancelDialogWithDelegate:;
- (id)getPublishProgressViewControllerWithContainer:;
- (id)getPublishProgressViewSize;
- (void)showRetryViewWhenLaunch;
- (id)getPublishProgressView;
- (id)getCirclePublishProgressView;
@end
