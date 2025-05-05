@interface AWEIMUserInfoCenter : NSObject
@property (nonatomic) BOOL xmojiUploaded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogout;
- (void)didFinishLogin;
- (void)setXmojiUploaded:;
- (void)updateXmojiUploadedFlag:;
- (BOOL)xmojiUploaded;
- (id)init;
- (void)dealloc;
+ (BOOL)readDiskCacheOfXmojiUploadedFlagForUserID:;
+ (void)writeDiskCacheOfXmojiUploadedFlag:userID:;
+ (id)sharedInstance;
@end
