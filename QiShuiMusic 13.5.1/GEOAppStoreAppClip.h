@interface GEOAppStoreAppClip : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSURL appClipURL;
@property (nonatomic) NSURL artworkURL;
@property (nonatomic) NSString provider;
@property (nonatomic) NSString appShortName;
- (id)artworkURL;
- (void)setArtworkURL:;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)provider;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)subtitle;
- (id)bundleID;
- (void)setBundleID:;
- (id)initWithBundleID:title:subtitle:appShortName:appClipURL:artworkURL:providerName:;
- (id)appClipURL;
- (void)setAppClipURL:;
- (id)appShortName;
@end
