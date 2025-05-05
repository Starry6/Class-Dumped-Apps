@interface VEAIMomentMaterialSegInfo : NSObject
@property (nonatomic) NSString fragmentId;
@property (nonatomic) q materialId;
@property (nonatomic) float startTime;
@property (nonatomic) float endTime;
@property (nonatomic) {VEAIMomentReframeFrame=ddddd} clipFrame;
- (id)fragmentId;
- (void)setFragmentId:;
- (void)setStartTime:;
- (void)setEndTime:;
- (float)startTime;
- (float)endTime;
- (id)clipFrame;
- (void).cxx_destruct;
- (long long)materialId;
- (void)setMaterialId:;
- (void)setClipFrame:;
@end
