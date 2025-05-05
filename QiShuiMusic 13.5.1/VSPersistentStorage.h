@interface VSPersistentStorage : NSObject
@property (nonatomic) VSAccountStore accountStore;
@property (nonatomic) VSAccountChannelsCenter channelsCenter;
@property (nonatomic) VSPrivacyVoucherLockbox voucherLockbox;
@property (nonatomic) VSPrivacyFacade privacyFacade;
- (id)initWithAccountStore:;
- (id)init;
- (id)accountStore;
- (void).cxx_destruct;
- (id)privacyFacade;
- (id)voucherLockbox;
- (id)initWithAccountStore:channelsCenterClass:;
- (id)channelsCenter;
+ (id)defaultStorageDirectoryURL;
@end
