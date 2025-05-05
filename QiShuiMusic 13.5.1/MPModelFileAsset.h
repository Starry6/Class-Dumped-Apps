@interface MPModelFileAsset : MPModelObject
@property (nonatomic) NSString filePath;
@property (nonatomic) Q fileSize;
@property (nonatomic) q protectionType;
@property (nonatomic) BOOL nonPurgeable;
@property (nonatomic) NSString purchaseBundleFilePath;
@property (nonatomic) q qualityType;
@property (nonatomic) Q traits;
@property (nonatomic) NSString hlsKeyServerURL;
@property (nonatomic) NSString hlsKeyServerProtocol;
@property (nonatomic) NSString hlsKeyCertificateURL;
+ (id)allSupportedProperties;
+ (id)__traits_KEY;
+ (id)__filePath_KEY;
+ (id)__fileSize_KEY;
+ (id)__nonPurgeable_KEY;
+ (id)__protectionType_KEY;
+ (id)__purchaseBundleFilePath_KEY;
+ (id)__qualityType_KEY;
+ (id)__hlsKeyServerURL_KEY;
+ (id)__hlsKeyServerProtocol_KEY;
+ (id)__hlsKeyCertificateURL_KEY;
@end
