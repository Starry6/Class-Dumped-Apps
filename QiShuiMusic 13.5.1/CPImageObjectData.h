@interface CPImageObjectData : NSObject
@property (nonatomic) ^{CGImage=} image;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundsOnPage;
- (void)dealloc;
- (void)setImage:;
- (id)image;
- (id)initWithCGImage:andBoundsOnPage:;
- (id)boundsOnPage;
- (void)setBoundsOnPage:;
+ (id)imageObjectDataWithCGImage:andBounds:;
@end
