@interface MPSNNReduceBinary : MPSCNNBinaryKernel
@property (nonatomic) {?={?=QQQ}{?=QQQ}} primarySourceClipRect;
@property (nonatomic) {?={?=QQQ}{?=QQQ}} secondarySourceClipRect;
@property (nonatomic) {?=qqq} primaryOffset;
@property (nonatomic) {?=qqq} secondaryOffset;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)initWithDevice:reduceOperation:;
- (int)reduceOp;
- (id)primarySourceClipRect;
- (void)setPrimarySourceClipRect:;
- (id)secondarySourceClipRect;
- (void)setSecondarySourceClipRect:;
+ (id)libraryInfo:;
@end
