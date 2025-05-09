@interface MIStoreMetadata : NSObject
@property (nonatomic) NSString iAdAttribution;
@property (nonatomic) NSString iAdConversionDate;
@property (nonatomic) NSString iAdImpressionDate;
@property (nonatomic) NSString artistName;
@property (nonatomic) NSNumber betaExternalVersionIdentifier;
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) NSString bundleShortVersionString;
@property (nonatomic) NSString purchaseDate;
@property (nonatomic) NSString appleID;
@property (nonatomic) NSNumber DSPersonID;
@property (nonatomic) NSNumber downloaderID;
@property (nonatomic) NSNumber familyID;
@property (nonatomic) NSNumber purchaserID;
@property (nonatomic) NSString altDSID;
@property (nonatomic) BOOL hasMessagesExtension;
@property (nonatomic) NSNumber initialODRSize;
@property (nonatomic) BOOL purchasedRedownload;
@property (nonatomic) NSNumber itemID;
@property (nonatomic) NSString itemName;
@property (nonatomic) NSString kind;
@property (nonatomic) NSString label;
@property (nonatomic) BOOL launchProhibited;
@property (nonatomic) NSString ratingLabel;
@property (nonatomic) NSNumber ratingRank;
@property (nonatomic) NSString releaseDate;
@property (nonatomic) NSString assetToken;
@property (nonatomic) NSString softwareVersionBundleID;
@property (nonatomic) NSNumber softwareVersionExternalIdentifier;
@property (nonatomic) NSString sourceApp;
@property (nonatomic) NSString storeCohort;
@property (nonatomic) NSNumber storefront;
@property (nonatomic) NSString variantID;
@property (nonatomic) NSString betaBuildGroupID;
@property (nonatomic) NSString genre;
@property (nonatomic) NSNumber genreID;
@property (nonatomic) NSArray subGenres;
@property (nonatomic) NSArray categories;
@property (nonatomic) BOOL gameCenterEnabled;
@property (nonatomic) BOOL gameCenterEverEnabled;
@property (nonatomic) BOOL isAutoDownload;
@property (nonatomic) NSString referrerURL;
@property (nonatomic) NSString referrerApp;
@property (nonatomic) BOOL sideLoadedDeviceBasedVPP;
@property (nonatomic) BOOL deviceBasedVPP;
@property (nonatomic) NSString enterpriseInstallURL;
@property (nonatomic) NSString redownloadParams;
@property (nonatomic) NSDictionary nameTranscriptions;
@property (nonatomic) BOOL factoryInstall;
@property (nonatomic) NSString md5;
@property (nonatomic) NSData protectedMetadata;
@property (nonatomic) NSNumber hasOrEverHasHadIAP;
- (BOOL)isGameCenterEnabled;
- (id)variantID;
- (void)setBundleVersion:;
- (id)artistName;
- (id)releaseDate;
- (id)familyID;
- (id)storeCohort;
- (void)setVariantID:;
- (id)appleID;
- (void)setKind:;
- (id)genre;
- (id)bundleVersion;
- (void)setCategories:;
- (void)setStorefront:;
- (id)storefront;
- (void)setAltDSID:;
- (void)setReferrerURL:;
- (id)altDSID;
- (BOOL)isPurchasedRedownload;
- (id)itemID;
- (id)initWithDictionary:;
- (id)kind;
- (void)setLabel:;
- (BOOL)isLaunchProhibited;
- (id)initWithCoder:;
- (id)label;
- (id)referrerURL;
- (void)setItemID:;
- (id)sourceApp;
- (id)ratingLabel;
- (id)ratingRank;
- (void)setAppleID:;
- (void)encodeWithCoder:;
- (void)setIsAutoDownload:;
- (void)setArtistName:;
- (id)itemName;
- (void).cxx_destruct;
- (void)setReleaseDate:;
- (void)setStoreCohort:;
- (BOOL)hasMessagesExtension;
- (id)description;
- (id)categories;
- (void)setFamilyID:;
- (id)dictionaryRepresentation;
- (BOOL)isAutoDownload;
- (BOOL)isEqual:;
- (id)purchaseDate;
- (id)copyWithZone:;
- (void)setGenre:;
- (id)genreID;
- (id)betaExternalVersionIdentifier;
- (BOOL)gameCenterEverEnabled;
- (BOOL)deviceBasedVPP;
- (id)md5;
- (void)setMd5:;
- (void)setItemName:;
- (void)setPurchaseDate:;
- (id)redownloadParams;
- (void)setRedownloadParams:;
- (void)setLaunchProhibited:;
- (id)softwareVersionBundleID;
- (void)setHasMessagesExtension:;
- (id)initialODRSize;
- (void)setInitialODRSize:;
- (id)downloaderID;
- (void)setDownloaderID:;
- (id)purchaserID;
- (void)setPurchaserID:;
- (id)betaBuildGroupID;
- (void)setBetaBuildGroupID:;
- (void)setGenreID:;
- (void)setDeviceBasedVPP:;
- (void)setBetaExternalVersionIdentifier:;
- (void)setRatingLabel:;
- (void)setRatingRank:;
- (id)softwareVersionExternalIdentifier;
- (void)setSoftwareVersionExternalIdentifier:;
- (id)iAdAttribution;
- (void)setIAdAttribution:;
- (id)iAdConversionDate;
- (void)setIAdConversionDate:;
- (id)iAdImpressionDate;
- (void)setIAdImpressionDate:;
- (BOOL)sideLoadedDeviceBasedVPP;
- (id)bundleShortVersionString;
- (void)setBundleShortVersionString:;
- (id)DSPersonID;
- (void)setDSPersonID:;
- (void)setPurchasedRedownload:;
- (id)assetToken;
- (void)setAssetToken:;
- (void)setSoftwareVersionBundleID:;
- (void)setSourceApp:;
- (id)subGenres;
- (void)setSubGenres:;
- (void)setGameCenterEnabled:;
- (void)setGameCenterEverEnabled:;
- (id)referrerApp;
- (void)setReferrerApp:;
- (void)setSideLoadedDeviceBasedVPP:;
- (id)enterpriseInstallURL;
- (void)setEnterpriseInstallURL:;
- (id)nameTranscriptions;
- (void)setNameTranscriptions:;
- (BOOL)isFactoryInstall;
- (void)setFactoryInstall:;
- (id)protectedMetadata;
- (void)setProtectedMetadata:;
- (id)hasOrEverHasHadIAP;
- (void)setHasOrEverHasHadIAP:;
+ (BOOL)supportsSecureCoding;
+ (id)metadataFromDictionary:;
+ (id)metadataFromPlistAtURL:error:;
+ (id)metadataFromPlistData:error:;
@end
