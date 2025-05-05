@interface VEEncodeAttributes : NSObject
@property (nonatomic) {?=qiIq} pts;
@property (nonatomic) double begin;
@property (nonatomic) q sampleFlag;
@property (nonatomic) VESampleData sampleData;
@property (nonatomic) HTSGLFramebuffer inputFramebuffer;
@property (nonatomic) IESMMObject<VEProcessSampleDelegate><VECompileStageProtocol> vtUnit;
- (id)inputFramebuffer;
- (long long)sampleFlag;
- (void)setInputFramebuffer:;
- (void)setSampleFlag:;
- (void)setVtUnit:;
- (id)vtUnit;
- (void)dealloc;
- (void).cxx_destruct;
- (double)begin;
- (id)pts;
- (void)setBegin:;
- (id)sampleData;
- (void)setSampleData:;
- (void)setPts:;
@end
