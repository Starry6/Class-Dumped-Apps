@interface HmpColorModel : NSObject
@property (nonatomic) ^{ColorModel=I} impl;
@property (nonatomic) BOOL own;
- (BOOL)own;
- (void)setOwn:;
- (id)init::;
- (id)initEx::::;
- (id)initFromPtr::;
- (int)primaries;
- (int)transfer_characteristic;
- (void)dealloc;
- (int)range;
- (id)ptr;
- (id)impl;
- (void)setImpl:;
- (int)space;
@end
