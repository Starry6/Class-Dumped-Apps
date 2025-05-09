@interface VECompileTaskManagerSession : IESMMObject
@property (nonatomic) Q transStatus;
@property (nonatomic) Q pretransStatus;
@property (nonatomic) BOOL hasVideoProcess;
@property (nonatomic) NSString targetFilePath;
@property (nonatomic) <IESMMTranscoderProtocol> mediaTranscoder;
@property (nonatomic) <IESMMTranscoderProtocol> mediaTranscoderForPreupload;
@property (nonatomic) HTSVideoData videoData;
@property (nonatomic) IESMMTransProcessData transConfig;
@property (nonatomic) @ videoProcess;
@property (nonatomic) @? completeBlock;
@property (nonatomic) Q decreaseEncodeCount;
@property (nonatomic) Q prepareEncodeCount;
@property (nonatomic) BOOL isPreencode;
@property (nonatomic) BOOL isBackgroundPreencode;
@property (nonatomic) BOOL isBackgroundEncode;
@property (nonatomic) double encodeStartTime;
@property (nonatomic) q maxRetryTimes;
@property (nonatomic) @? effectFilterPathBlock;
@property (nonatomic) @? progressBlock;
@property (nonatomic) @? encodeDataCB;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelTranscode;
- (id)mediaTranscoder;
- (void)setIsPreencode:;
- (void)setTransConfig:;
- (void)setTransStatus:;
- (double)encodeStartTime;
- (BOOL)hasVideoProcess;
- (void)setMediaTranscoderForPreupload:;
- (void)cancelTranscode:;
- (id)completeBlock;
- (unsigned long long)decreaseEncodeCount;
- (void)didExport:;
- (id)effectFilterPathBlock;
- (void)enableDynamicSpeed:;
- (id)encodeDataCB;
- (id)getBreakPointURL;
- (BOOL)isBackgroundEncode;
- (BOOL)isBackgroundPreencode;
- (BOOL)isPreUploadable:transConfig:videoProcess:;
- (BOOL)isPreencode;
- (long long)maxRetryTimes;
- (id)mediaTranscoderForPreupload;
- (void)p_cancelTrans:;
- (void)p_cancelTrans:completionBlock:;
- (void)p_initMediaTranscoderWithVideoData:config:videoProcess:forPreupload:;
- (BOOL)p_isPreUploadable:transConfig:videoProcess:;
- (void)p_mergeCompleteWithRes:completeBlock:;
- (void)p_resetEncodeParam;
- (void)p_resetTrackParam;
- (void)p_resetTransFileDict:;
- (void)p_transWithVideoData:transConfig:videoProcess:;
- (void)p_updateProgress:;
- (void)postTrack;
- (unsigned long long)prepareEncodeCount;
- (void)prepareTransWithVideoData:transConfig:videoProcess:;
- (unsigned long long)pretransStatus;
- (void)setCompleteBlock:;
- (void)setDecreaseEncodeCount:;
- (void)setEffectFilterPathBlock:;
- (void)setEncodeDataCB:;
- (void)setEncodeStartTime:;
- (void)setHasVideoProcess:;
- (void)setIsBackgroundEncode:;
- (void)setIsBackgroundPreencode:;
- (void)setMaxRetryTimes:;
- (void)setMediaTranscoder:;
- (void)setPrepareEncodeCount:;
- (void)setPretransStatus:;
- (void)setTargetFilePath:;
- (void)setVideoData:;
- (void)setVideoProcess:;
- (id)targetFilePath;
- (id)transConfig;
- (unsigned long long)transStatus;
- (void)transWithVideoData:transConfig:processor:completeBlock:;
- (void)transWithVideoData:transConfig:videoProcess:completeBlock:;
- (id)videoData;
- (id)videoProcess;
- (void)willExport:;
- (void)becomeActive;
- (id)progressBlock;
- (id)init;
- (void)dealloc;
- (void)setProgressBlock:;
- (void)enterBackground;
- (void)resume;
- (void).cxx_destruct;
- (void)enterForeground;
- (void)pause;
- (void)resignActive;
- (void)memoryWarning;
+ (id)sharedInstance;
@end
