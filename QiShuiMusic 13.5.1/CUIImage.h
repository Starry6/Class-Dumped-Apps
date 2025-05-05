@interface CUIImage : NSObject
@property (nonatomic) ^{CGImage=} image;
@property (nonatomic) {CGSize=dd} size;
- (void)dealloc;
- (id)cgImage;
- (id)initWithCGImage:;
- (id)image;
- (id)copyWithZone:;
- (id)size;
+ (id)imageWithCGImage:;
@end
