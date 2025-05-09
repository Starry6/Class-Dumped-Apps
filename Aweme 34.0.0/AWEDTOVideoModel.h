@interface AWEDTOVideoModel : MTLModel
@property (nonatomic) BOOL videoMuted;
@property (nonatomic) BOOL isFastImportVideo;
@property (nonatomic) BOOL autoEnhanceOn;
@property (nonatomic) q canvasType;
@property (nonatomic) BOOL needExpandCompiledSize;
@property (nonatomic) AWEDTOAspectRatioData aspectRatioData;
@property (nonatomic) q microphoneBarState;
@property (nonatomic) BOOL isVocalMusicMixing;
@property (nonatomic) double videoFrameRatio;
@property (nonatomic) BOOL isExposureOptmize;
@property (nonatomic) NSString capturePhotoPath;
@property (nonatomic) q autoEnhanceType;
@property (nonatomic) q audioAecDelayTime;
@property (nonatomic) q duration;
@property (nonatomic) BOOL canvasEnableGesture;
@property (nonatomic) BOOL isDynamicRecorder;
@property (nonatomic) double canvasContentRatio;
@property (nonatomic) BOOL isShareComment;
@property (nonatomic) NSArray canvasColorList;
@property (nonatomic) BOOL isNewStyleShare;
@property (nonatomic) BOOL smartBeautyOn;
@property (nonatomic) NSString smartBeautyTag;
@property (nonatomic) NSString smartBeautySpecialFilterId;
@property (nonatomic) NSArray smartBeautySpecialBeautyIdList;
@property (nonatomic) BOOL smartBeautyContainPortraint;
@property (nonatomic) BOOL smartBeautyEnableFilterUrs;
@property (nonatomic) BOOL smartBeautyEnableBeautyUrs;
@property (nonatomic) AWEDTOAIEnhanceModel aiEnhanceInfo;
@property (nonatomic) double brushMaximumOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCanvasType:;
- (BOOL)isFastImportVideo;
- (void)setIsFastImportVideo:;
- (BOOL)autoEnhanceOn;
- (void)setAutoEnhanceOn:;
- (long long)canvasType;
- (BOOL)needExpandCompiledSize;
- (void)setNeedExpandCompiledSize:;
- (id)aspectRatioData;
- (void)setAspectRatioData:;
- (long long)microphoneBarState;
- (void)setMicrophoneBarState:;
- (BOOL)isVocalMusicMixing;
- (void)setIsVocalMusicMixing:;
- (double)videoFrameRatio;
- (void)setVideoFrameRatio:;
- (BOOL)isExposureOptmize;
- (void)setIsExposureOptmize:;
- (id)capturePhotoPath;
- (void)setCapturePhotoPath:;
- (long long)autoEnhanceType;
- (void)setAutoEnhanceType:;
- (long long)audioAecDelayTime;
- (void)setAudioAecDelayTime:;
- (BOOL)canvasEnableGesture;
- (void)setCanvasEnableGesture:;
- (BOOL)isDynamicRecorder;
- (void)setIsDynamicRecorder:;
- (double)canvasContentRatio;
- (void)setCanvasContentRatio:;
- (BOOL)isShareComment;
- (void)setIsShareComment:;
- (id)canvasColorList;
- (void)setCanvasColorList:;
- (BOOL)isNewStyleShare;
- (void)setIsNewStyleShare:;
- (BOOL)smartBeautyOn;
- (void)setSmartBeautyOn:;
- (id)smartBeautyTag;
- (void)setSmartBeautyTag:;
- (id)smartBeautySpecialFilterId;
- (void)setSmartBeautySpecialFilterId:;
- (id)smartBeautySpecialBeautyIdList;
- (void)setSmartBeautySpecialBeautyIdList:;
- (BOOL)smartBeautyContainPortraint;
- (void)setSmartBeautyContainPortraint:;
- (BOOL)smartBeautyEnableFilterUrs;
- (void)setSmartBeautyEnableFilterUrs:;
- (BOOL)smartBeautyEnableBeautyUrs;
- (void)setSmartBeautyEnableBeautyUrs:;
- (id)aiEnhanceInfo;
- (void)setAiEnhanceInfo:;
- (double)brushMaximumOffset;
- (void)setBrushMaximumOffset:;
- (void)setDuration:;
- (void).cxx_destruct;
- (long long)duration;
- (void)setVideoMuted:;
- (BOOL)videoMuted;
+ (id)aspectRatioDataJSONTransformer;
+ (id)aiEnhanceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
