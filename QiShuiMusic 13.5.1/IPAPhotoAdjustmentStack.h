@interface IPAPhotoAdjustmentStack : IPAAdjustmentStack
@property (nonatomic) {PFIntSize_st=QQ} inputSize;
@property (nonatomic) q orientation;
@property (nonatomic) IPAPhotoAdjustmentPipeline pipeline;
- (long long)orientation;
- (id)inputSize;
- (void).cxx_destruct;
- (id)pipeline;
- (void)setOrientation:;
- (id)copyWithZone:;
- (void)setInputSize:;
- (id)maskUUIDs;
- (void)setPipeline:;
- (id)minimumVersionForFormat:;
- (id)_debugDescriptionSuffix;
@end
