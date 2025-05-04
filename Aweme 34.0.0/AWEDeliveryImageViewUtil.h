@interface AWEDeliveryImageViewUtil : NSObject
+ (void)awed_setDownsampleImageWithURL:placeholderImage:imageView:pigeonBizType:completion:;
+ (void)awed_setDownsampleImageWithURL:pigeonBizType:imageView:;
+ (void)awed_setDownsampleImageWithURL:placeholderImage:pigeonBizType:imageView:;
+ (void)awed_setImageWithURLString:placeholderImage:pigeonBizType:imageView:;
+ (void)awed_setImageWithURLString:placeholderImage:imageView:pigeonBizType:completion:;
+ (void)awed_setImageWithURLString:pigeonBizType:imageView:;
+ (void)awed_setImageWithURLString:imageView:pigeonBizType:completion:;
@end
