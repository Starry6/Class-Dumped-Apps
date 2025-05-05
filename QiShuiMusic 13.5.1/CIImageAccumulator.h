@interface CIImageAccumulator : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} extent;
@property (nonatomic) NSInteger format;
- (id)init;
- (void)dealloc;
- (int)format;
- (id)extent;
- (id)colorSpace;
- (void)setImage:;
- (void)clear;
- (id)description;
- (void)commitUpdates:;
- (id)image;
- (id)initWithExtent:format:;
- (id)initWithExtent:format:colorSpace:;
- (id)initWithExtent:format:options:;
- (void)setImage:dirtyRect:;
+ (id)imageAccumulatorWithExtent:format:options:;
+ (id)imageAccumulatorWithExtent:format:;
+ (id)imageAccumulatorWithExtent:format:colorSpace:;
@end
