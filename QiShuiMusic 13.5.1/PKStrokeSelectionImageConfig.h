@interface PKStrokeSelectionImageConfig : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} strokeBounds;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} imageViewBounds;
@property (nonatomic) double scale;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) BOOL invertedColors;
@property (nonatomic) BOOL rotated;
@property (nonatomic) BOOL sixChannel;
@property (nonatomic) BOOL highlighted;
- (unsigned long long)hash;
- (id)imageSize;
- (BOOL)highlighted;
- (double)scale;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)rotated;
- (BOOL)invertedColors;
- (id)strokeBounds;
- (id)initWithStrokeBounds:imageViewBounds:scale:imageSize:invertedColors:rotated:sixChannel:highlighted:;
- (id)imageViewBounds;
- (BOOL)sixChannel;
@end
