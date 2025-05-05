@interface AWEIMStickerResponseModel : IESIMBaseApiModel
@property (nonatomic) NSNumber version;
@property (nonatomic) Q resourceType;
@property (nonatomic) Q packageType;
@property (nonatomic) NSArray stickers;
@property (nonatomic) NSNumber identifier;
- (void)setPackageType:;
- (void)setVersion:;
- (id)version;
- (unsigned long long)resourceType;
- (id)identifier;
- (void)setResourceType:;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)stickers;
- (void)setStickers:;
- (unsigned long long)packageType;
+ (id)stickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
