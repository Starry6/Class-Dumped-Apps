@interface PBLoadRequestContext : NSObject
@property (nonatomic) UISPasteSharingToken pasteSharingToken;
@property (nonatomic) BOOL fromUIFramework;
@property (nonatomic) BOOL blockingMainThread;
@property (nonatomic) BOOL clientHasFinishedLaunching;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)pasteSharingToken;
- (void)setPasteSharingToken:;
- (id)initWithOptions:pasteSharingToken:;
- (BOOL)isFromUIFramework;
- (BOOL)isBlockingMainThread;
- (BOOL)clientHasFinishedLaunching;
+ (BOOL)supportsSecureCoding;
@end
