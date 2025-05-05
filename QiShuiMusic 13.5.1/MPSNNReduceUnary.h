@interface MPSNNReduceUnary : MPSCNNKernel
@property (nonatomic) {?={?=QQQ}{?=QQQ}} clipRectSource;
@property (nonatomic) {?=qqq} offset;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setClipRectSource:;
- (id)clipRectSource;
- (id)initWithDevice:reduceOperation:;
- (void)setWeightValue:;
+ (id)libraryInfo:;
@end
