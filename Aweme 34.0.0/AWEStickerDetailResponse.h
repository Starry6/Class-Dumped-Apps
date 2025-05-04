@interface AWEStickerDetailResponse : AWEBaseApiModel
@property (nonatomic) NSArray stickerArray;
@property (nonatomic) q shootMode;
- (id)stickerArray;
- (void)setStickerArray:;
- (long long)shootMode;
- (void)setShootMode:;
- (void).cxx_destruct;
+ (id)stickerArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
