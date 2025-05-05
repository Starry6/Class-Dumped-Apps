@interface RPStoreInfo : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString author;
@property (nonatomic) NSURL itemURL;
@property (nonatomic) NSURL appArtworkURL;
- (id)dictionary;
- (id)author;
- (void)setAppName:;
- (void)setItemURL:;
- (id)appName;
- (void).cxx_destruct;
- (void)setAuthor:;
- (id)bundleID;
- (id)itemURL;
- (void)setBundleID:;
- (id)appArtworkURL;
- (void)setAppArtworkURL:;
@end
