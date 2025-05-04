@interface AWEIMUserInfoCenter : NSObject
@property (nonatomic) BOOL xmojiUploaded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)updateXmojiUploadedFlag:;
- (BOOL)xmojiUploaded;
- (void)setXmojiUploaded:;
- (id)init;
- (void)dealloc;
+ (BOOL)enableFluencyOpt;
+ (BOOL)readDiskCacheOfXmojiUploadedFlag;
+ (BOOL)readDiskCacheOfXmojiUploadedFlagForUserID:;
+ (void)writeDiskCacheOfXmojiUploadedFlag:userID:;
+ (void)writeDiskCacheOfXmojiUploadedFlag:;
+ (id)sharedInstance;
@end
