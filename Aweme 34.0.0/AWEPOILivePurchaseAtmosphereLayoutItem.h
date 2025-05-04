@interface AWEPOILivePurchaseAtmosphereLayoutItem : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString imageUrl;
@property (nonatomic) NSString text;
@property (nonatomic) q num;
@property (nonatomic) double imageHeight;
@property (nonatomic) double imageWidth;
- (void)setText:;
- (id)text;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (double)imageWidth;
- (id)imageUrl;
- (void)setImageUrl:;
- (double)imageHeight;
- (long long)num;
- (void)setNum:;
- (void)setImageHeight:;
- (void)setImageWidth:;
+ (id)convertItemWithDict:;
@end
