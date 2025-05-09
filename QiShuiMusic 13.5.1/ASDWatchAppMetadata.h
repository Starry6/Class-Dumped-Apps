@interface ASDWatchAppMetadata : NSObject
@property (nonatomic) BOOL skipIfInstalled;
@property (nonatomic) NSString altDSID;
@property (nonatomic) NSString appleID;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSNumber downloaderID;
@property (nonatomic) NSNumber externalVersionID;
@property (nonatomic) NSNumber itemID;
@property (nonatomic) NSNumber previousExternalVersionID;
@property (nonatomic) NSString previousVariantID;
@property (nonatomic) NSNumber purchaserID;
@property (nonatomic) NSString redownloadParams;
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) q metadataType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUserInitiated:;
- (id)appleID;
- (void)setAltDSID:;
- (id)altDSID;
- (id)itemID;
- (id)initWithCoder:;
- (BOOL)isUserInitiated;
- (void)setItemID:;
- (void)setAppleID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:;
- (void)setBundleID:;
- (long long)metadataType;
- (id)externalVersionID;
- (void)setExternalVersionID:;
- (id)redownloadParams;
- (void)setRedownloadParams:;
- (id)initWithStoreMetadata:;
- (id)initWithItemID:;
- (id)initWithItemID:externalVersionID:;
- (id)downloaderID;
- (void)setDownloaderID:;
- (id)previousExternalVersionID;
- (void)setPreviousExternalVersionID:;
- (id)previousVariantID;
- (void)setPreviousVariantID:;
- (id)purchaserID;
- (void)setPurchaserID:;
- (BOOL)skipIfInstalled;
- (void)setSkipIfInstalled:;
+ (BOOL)supportsSecureCoding;
+ (id)metadataFromStoreMetadata:;
@end
