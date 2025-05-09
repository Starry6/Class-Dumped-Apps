@interface AWEIMMixShareDetailInfoModel_PhotoInfo : MTLModel
@property (nonatomic) NSString originUrl;
@property (nonatomic) NSString thumbUrl;
@property (nonatomic) NSString mediumUrl;
@property (nonatomic) NSString largeUrl;
@property (nonatomic) NSString objectId;
@property (nonatomic) NSString secretKey;
@property (nonatomic) NSString md5;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) BOOL useOriginImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)originUrl;
- (void)setOriginUrl:;
- (id)mediumUrl;
- (id)largeUrl;
- (id)thumbUrl;
- (void)setThumbUrl:;
- (void)setMediumUrl:;
- (BOOL)useOriginImage;
- (void)setUseOriginImage:;
- (void)setLargeUrl:;
- (void)setHeight:;
- (void)setSecretKey:;
- (void)setWidth:;
- (long long)width;
- (id)secretKey;
- (void).cxx_destruct;
- (id)objectId;
- (long long)height;
- (void)setObjectId:;
- (void)setMd5:;
- (id)md5;
+ (id)JSONKeyPathsByPropertyKey;
@end
