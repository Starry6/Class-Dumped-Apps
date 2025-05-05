@interface CSJSDImageFrame : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) double duration;
- (id)initWithImage:duration:;
- (void)setImage:;
- (void)setDuration:;
- (void).cxx_destruct;
- (double)duration;
- (id)image;
+ (id)frameWithImage:duration:;
@end
