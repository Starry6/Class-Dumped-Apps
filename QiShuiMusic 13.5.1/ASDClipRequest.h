@interface ASDClipRequest : NSObject
@property (nonatomic) NSDictionary dictionary;
@property (nonatomic) NSData placeholderArtwork;
@property (nonatomic) BOOL prefetchDecryption;
@property (nonatomic) NSUUID uniqueID;
@property (nonatomic) NSString installSourceBundleID;
@property (nonatomic) NSString referrerType;
@property (nonatomic) BOOL thirdPartyWithNoAppReferrer;
@property (nonatomic) NSURL sourceURL;
- (id)dictionary;
- (id)uniqueID;
- (void)setSourceURL:;
- (id)initWithDictionary:;
- (id)sourceURL;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)placeholderArtwork;
- (void)setPlaceholderArtwork:;
- (BOOL)prefetchDecryption;
- (void)setPrefetchDecryption:;
- (id)installSourceBundleID;
- (void)setInstallSourceBundleID:;
- (id)referrerType;
- (void)setReferrerType:;
- (BOOL)thirdPartyWithNoAppReferrer;
- (void)setThirdPartyWithNoAppReferrer:;
+ (BOOL)supportsSecureCoding;
@end
