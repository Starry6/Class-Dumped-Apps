@interface PFPosterMedia : NSObject
@property (nonatomic) q mediaType;
@property (nonatomic) NSString subpath;
@property (nonatomic) NSString assetUUID;
@property (nonatomic) Q version;
@property (nonatomic) PFPosterEditConfiguration editConfiguration;
- (long long)mediaType;
- (void)setMediaType:;
- (id)init;
- (void)setVersion:;
- (unsigned long long)version;
- (id)assetUUID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setAssetUUID:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)editConfiguration;
- (void)setEditConfiguration:;
- (id)initWithAssetUUID:;
- (id)subpath;
- (void)setSubpath:;
+ (BOOL)supportsSecureCoding;
@end
