@interface AWEStudioSecurityImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showTwiceVerifyAlertView:cancelBlock:successBlock:failBlock:enterMethod:;
- (void)startForScene:;
- (void)configTwiceVerify;
- (void)dismissPublishAlertView;
- (void)postAWEVerifyEndWithShowPublishRetryViewNotificationWithObject:;
@end
