@interface AWECustomStickerLimitConfig : MTLModel
@property (nonatomic) double gifSizeLimit;
@property (nonatomic) double gifMaxLimit;
@property (nonatomic) double uploadWidthLimit;
@property (nonatomic) double uploadHeightLimit;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)gifMaxLimit;
- (double)gifSizeLimit;
- (double)uploadWidthLimit;
- (double)uploadHeightLimit;
- (void)setGifSizeLimit:;
- (void)setGifMaxLimit:;
- (void)setUploadWidthLimit:;
- (void)setUploadHeightLimit:;
+ (id)JSONKeyPathsByPropertyKey;
@end
