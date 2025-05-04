@interface AWEIMStickerResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber version;
@property (nonatomic) Q resourceType;
@property (nonatomic) Q packageType;
@property (nonatomic) NSArray stickers;
@property (nonatomic) NSNumber identifier;
- (unsigned long long)resourceType;
- (void)setResourceType:;
- (void)setIdentifier:;
- (id)version;
- (id)identifier;
- (void)setVersion:;
- (void).cxx_destruct;
- (void)setPackageType:;
- (unsigned long long)packageType;
- (id)stickers;
- (void)setStickers:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)stickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
