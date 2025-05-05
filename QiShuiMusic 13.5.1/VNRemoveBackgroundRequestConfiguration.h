@interface VNRemoveBackgroundRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) BOOL performInPlace;
@property (nonatomic) BOOL cropResult;
@property (nonatomic) BOOL returnMask;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (BOOL)performInPlace;
- (void)setPerformInPlace:;
- (BOOL)cropResult;
- (void)setCropResult:;
- (BOOL)returnMask;
- (void)setReturnMask:;
@end
