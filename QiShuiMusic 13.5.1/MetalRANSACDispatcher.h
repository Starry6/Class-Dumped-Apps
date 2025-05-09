@interface MetalRANSACDispatcher : NSObject
@property (nonatomic) <MTLDevice> m_metalDevice;
@property (nonatomic) <MTLLibrary> m_metalLibrary;
@property (nonatomic) <MTLCommandQueue> m_metalCommandQueue;
@property (nonatomic) <MTLFunction> m_metalKernelFunction;
@property (nonatomic) <MTLComputePipelineState> m_metalPipeline;
@property (nonatomic) Q m_numThreadsPerGroup;
@property (nonatomic) Q m_maxCorrespondences;
@property (nonatomic) <MTLBuffer> m_mX;
@property (nonatomic) <MTLBuffer> m_mXhat;
@property (nonatomic) <MTLBuffer> m_ScoreBuffer;
@property (nonatomic) <MTLBuffer> m_RansacParams;
@property (nonatomic) <MTLBuffer> m_RansacHomographies;
@property (nonatomic) <MTLBuffer> m_ModelScores;
@property (nonatomic) float inlierLimit;
@property (nonatomic) {CGSize=dd} frameSize;
- (void).cxx_destruct;
- (void)setFrameSize:;
- (id)frameSize;
- (id)initWithMaxCorrespondences:;
- (void)performRansacOnData:firstPointSet:secondPointSet:pointWeights:homographies:numHomographies:homScores:;
- (void)assureSizeAndCopyToMetalBuffer:fromData:dataSize:metalResourceOptions:;
- (id)m_metalCommandQueue;
- (void)setM_metalCommandQueue:;
- (id)m_metalDevice;
- (void)setM_metalDevice:;
- (id)m_metalKernelFunction;
- (void)setM_metalKernelFunction:;
- (id)m_metalLibrary;
- (void)setM_metalLibrary:;
- (id)m_metalPipeline;
- (void)setM_metalPipeline:;
- (float)inlierLimit;
- (void)setInlierLimit:;
- (unsigned long long)m_numThreadsPerGroup;
- (void)setM_numThreadsPerGroup:;
- (unsigned long long)m_maxCorrespondences;
- (void)setM_maxCorrespondences:;
- (id)m_mX;
- (void)setM_mX:;
- (id)m_mXhat;
- (void)setM_mXhat:;
- (id)m_ScoreBuffer;
- (void)setM_ScoreBuffer:;
- (id)m_RansacParams;
- (void)setM_RansacParams:;
- (id)m_RansacHomographies;
- (void)setM_RansacHomographies:;
- (id)m_ModelScores;
- (void)setM_ModelScores:;
@end
