@interface MetalFilterBmfSR : MetalFilterDefault
@property (nonatomic) BOOL enable15SR;
@property (nonatomic) BOOL enablesync;
@property (nonatomic) NSInteger algoType;
@property (nonatomic) BOOL enableRoiSR;
@property (nonatomic) float roiSRXInRate;
@property (nonatomic) float roiSRYInRate;
@property (nonatomic) float roiSRWInRate;
@property (nonatomic) float roiSRHInRate;
@property (nonatomic) float roiSRYColor;
@property (nonatomic) float roiSRUColor;
@property (nonatomic) float roiSRVColor;
@property (nonatomic) NSInteger srAlgoType;
@property (nonatomic) NSInteger srMode;
@property (nonatomic) NSInteger srExtraMode;
@property (nonatomic) BOOL shouldUpdateSr;
@property (nonatomic) NSInteger updateSrAlgoType;
@property (nonatomic) <IBmfSuperResolution> vrsrLut;
@property (nonatomic) <IBmfDevice> bmfDevice;
@property (nonatomic) NSInteger lifeId;
@property (nonatomic) BOOL isAlreadySetDevice;
@property (nonatomic) BOOL isBMFInitFinish;
@property (nonatomic) q sumFrameCount;
@property (nonatomic) double sumCostTime;
@property (nonatomic) double averageCostTime;
@property (nonatomic) q sumSuccessFrameCount;
@property (nonatomic) double srSuccessRate;
@property (nonatomic) NSObject<OS_dispatch_queue> bmfInitprocessorQueue;
@property (nonatomic) NSString licenseName;
@property (nonatomic) BOOL useBMFSRNewInterface;
@property (nonatomic) NSString cacheDir;
@property (nonatomic) NSInteger sharpLevel;
@property (nonatomic) BOOL enableSRAfterHDR;
@property (nonatomic) BOOL enableIndivaldulCmdBuf;
@property (nonatomic) NSString downloadAlgorithmName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initBmf;
- (void)setEnableRoiSR:;
- (void)setLicenseName:;
- (void)setRoiSRUColor:;
- (void)setRoiSRYColor:;
- (void)setSrExtraMode:;
- (id)vrsrLut;
- (double)averageCostTime;
- (BOOL)isBMFInitFinish;
- (id)processWithRoi:;
- (void)setRoiSRVColor:;
- (void)setSumCostTime:;
- (int)algoType;
- (id)bmfDevice;
- (id)bmfInitprocessorQueue;
- (id)cacheDir;
- (void)checkDownloadAndInitBmf;
- (void)createQueueAndInitBmf;
- (id)downloadAlgorithmName;
- (BOOL)enable15SR;
- (BOOL)enableIndivaldulCmdBuf;
- (BOOL)enableRoiSR;
- (BOOL)enableSRAfterHDR;
- (BOOL)enablesync;
- (id)getEffectPatameterStr;
- (BOOL)isAlreadySetDevice;
- (id)licenseName;
- (int)lifeId;
- (BOOL)needDownload:;
- (BOOL)returnBmfResult:;
- (float)roiSRHInRate;
- (float)roiSRUColor;
- (float)roiSRVColor;
- (float)roiSRWInRate;
- (float)roiSRXInRate;
- (float)roiSRYColor;
- (float)roiSRYInRate;
- (void)setAlgoType:;
- (void)setAverageCostTime:;
- (void)setBmfDevice:;
- (void)setBmfInitprocessorQueue:;
- (void)setCacheDir:;
- (void)setDownloadAlgorithmName:;
- (void)setEnable15SR:;
- (void)setEnableIndivaldulCmdBuf:;
- (void)setEnableSRAfterHDR:;
- (void)setEnablesync:;
- (void)setIsAlreadySetDevice:;
- (void)setIsBMFInitFinish:;
- (void)setLifeId:;
- (void)setRoiSRHInRate:;
- (void)setRoiSRWInRate:;
- (void)setRoiSRXInRate:;
- (void)setRoiSRYInRate:;
- (void)setSharpLevel:;
- (void)setShouldUpdateSr:;
- (void)setSrAlgoType:;
- (void)setSrMode:;
- (void)setSrSuccessRate:;
- (void)setSumFrameCount:;
- (void)setSumSuccessFrameCount:;
- (void)setUpdateSrAlgoType:;
- (void)setUseBMFSRNewInterface:;
- (void)setVrsrLut:;
- (void)setupBMF:;
- (void)setupBMFByTypeAndScale:;
- (int)sharpLevel;
- (BOOL)shouldUpdateSr;
- (int)srAlgoType;
- (int)srExtraMode;
- (int)srMode;
- (double)srSuccessRate;
- (double)sumCostTime;
- (long long)sumFrameCount;
- (long long)sumSuccessFrameCount;
- (void)updateCommonParams:;
- (void)updateROIInfo:;
- (void)updateSRMode:alg:;
- (void)updateSRType:;
- (int)updateSrAlgoType;
- (BOOL)useBMFSRNewInterface;
- (void)dealloc;
- (id)process:;
- (void)setEffect:;
- (id)processPixelBuffer:;
- (void).cxx_destruct;
- (id)initWithDictionary:index:;
@end
