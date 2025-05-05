@interface CSJCouponInfo : NSObject
@property (nonatomic) q style_type;
@property (nonatomic) q position;
@property (nonatomic) double image_scale_rate;
@property (nonatomic) NSString image_gif_url;
@property (nonatomic) double image_gif_aspect_ratio;
- (double)image_gif_aspect_ratio;
- (id)image_gif_url;
- (double)image_scale_rate;
- (void)setImage_gif_aspect_ratio:;
- (void)setImage_gif_url:;
- (void)setImage_scale_rate:;
- (void)setStyle_type:;
- (long long)style_type;
- (void)setPosition:;
- (long long)position;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
