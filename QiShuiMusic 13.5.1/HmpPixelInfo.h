@interface HmpPixelInfo : NSObject
@property (nonatomic) ^{PixelInfo=i{ColorModel=I}} impl;
@property (nonatomic) BOOL own;
- (BOOL)own;
- (BOOL)is_rgbx;
- (void)setOwn:;
- (int)infer_space;
- (id)initEx::;
- (id)initFromPtr::;
- (int)primaries;
- (int)transfer_characteristic;
- (void)dealloc;
- (int)format;
- (int)range;
- (id)ptr;
- (id)init:;
- (id)impl;
- (void)setImpl:;
- (int)space;
@end
