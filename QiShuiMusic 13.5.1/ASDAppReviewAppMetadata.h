@interface ASDAppReviewAppMetadata : NSObject
@property (nonatomic) NSURL artworkURL;
@property (nonatomic) NSDictionary backgroundAssetMetadata;
@property (nonatomic) BOOL beta;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSNumber externalVersionIdentifier;
@property (nonatomic) BOOL hasMessagesExtension;
@property (nonatomic) NSNumber initialODRSize;
@property (nonatomic) NSNumber itemID;
@property (nonatomic) NSString itemName;
@property (nonatomic) BOOL launchProhibited;
@property (nonatomic) NSURL messagesArtworkURL;
@property (nonatomic) NSData onDemandResourceManifest;
@property (nonatomic) NSData packageDPInfo;
@property (nonatomic) NSData packageSINF;
@property (nonatomic) NSURL packageURL;
@property (nonatomic) MIStoreMetadata storeMetadata;
@property (nonatomic) NSString variantID;
@property (nonatomic) NSString vendorName;
@property (nonatomic) q metadataType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)variantID;
- (id)artworkURL;
- (void)setVariantID:;
- (void)setArtworkURL:;
- (BOOL)isBeta;
- (id)vendorName;
- (id)itemID;
- (id)packageURL;
- (BOOL)isLaunchProhibited;
- (id)initWithCoder:;
- (void)setItemID:;
- (void)encodeWithCoder:;
- (id)itemName;
- (void).cxx_destruct;
- (BOOL)hasMessagesExtension;
- (id)bundleID;
- (id)copyWithZone:;
- (void)setBeta:;
- (id)externalVersionIdentifier;
- (long long)metadataType;
- (void)setStoreMetadata:;
- (id)storeMetadata;
- (void)setItemName:;
- (void)setVendorName:;
- (void)setLaunchProhibited:;
- (void)setExternalVersionIdentifier:;
- (id)initWithStoreMetadata:;
- (id)backgroundAssetMetadata;
- (void)setBackgroundAssetMetadata:;
- (void)setHasMessagesExtension:;
- (id)initialODRSize;
- (void)setInitialODRSize:;
- (id)messagesArtworkURL;
- (void)setMessagesArtworkURL:;
- (id)onDemandResourceManifest;
- (void)setOnDemandResourceManifest:;
- (id)packageDPInfo;
- (void)setPackageDPInfo:;
- (id)packageSINF;
- (void)setPackageSINF:;
- (void)setPackageURL:;
+ (BOOL)supportsSecureCoding;
@end
