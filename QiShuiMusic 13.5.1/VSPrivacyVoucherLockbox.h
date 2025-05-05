@interface VSPrivacyVoucherLockbox : NSObject
@property (nonatomic) VSRemoteNotifier remoteNotifier;
@property (nonatomic) NSArray unredeemedVouchers;
@property (nonatomic) NSUndoManager undoManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)remoteNotifier:didReceiveRemoteNotificationWithUserInfo:;
- (void)setRemoteNotifier:;
- (void).cxx_destruct;
- (void)setUndoManager:;
- (id)remoteNotifier;
- (id)undoManager;
- (void)issueVouchersForApps:providerID:;
- (void)issueVouchers:;
- (void)redeemVoucher:;
- (id)_voucherArchiveURL;
- (void)setUnredeemedVouchers:;
- (id)unredeemedVouchers;
- (void)removeAllVouchers;
+ (id)getVouchersFromSelectedAppDescriptions:forProviderID:;
@end
