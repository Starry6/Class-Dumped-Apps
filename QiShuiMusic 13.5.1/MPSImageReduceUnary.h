@interface MPSImageReduceUnary : MPSUnaryImageKernel
@property (nonatomic) {?={?=QQQ}{?=QQQ}} clipRectSource;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setClipRectSource:;
- (id)clipRectSource;
- (id)initWithDevice:reduceOperation:;
+ (id)libraryInfo:;
@end
