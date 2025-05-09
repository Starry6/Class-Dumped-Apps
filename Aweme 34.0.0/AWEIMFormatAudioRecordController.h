@interface AWEIMFormatAudioRecordController : NSObject
@property (nonatomic) Q effectTouchSessionID;
@property (nonatomic) Q currentTouchSessionID;
@property (nonatomic) NSMutableArray restoreWindowGR;
@property (nonatomic) NSData recordData;
@property (nonatomic) NSString translateResult;
@property (nonatomic) NSString translateLastResult;
@property (nonatomic) BOOL isFinish;
@property (nonatomic) q translateLenBuffer;
@property (nonatomic) BOOL starTrackUserAsrDuration;
@property (nonatomic) BOOL isMovedToCancel;
@property (nonatomic) NSString conversationID;
@property (nonatomic) UIView<AWEIMAudioInputTouchViewProtocol> audioInputView;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) FBKVOController vmKVO;
@property (nonatomic) <IESIMAudioMessageRecorderInterface> recorder;
@property (nonatomic) AWEIMAudioIndicatorView audioIndicatorView;
@property (nonatomic) <AWEIMAudioRecordControllerDelegate> delegate;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString resourceFrom;
@property (nonatomic) AWEIMConversationContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)audioInputView;
- (void)setAudioInputView:;
- (void)audioInputTouchViewTouchDownInside:;
- (void)audioInputTouchViewTouchUpOutside:cancelled:;
- (BOOL)isFinish;
- (void)setIsFinish:;
- (id)resourceFrom;
- (void)setResourceFrom:;
- (void)audioRecorderStartRecord:error:;
- (void)audioRecorderExceedLimitTime:;
- (void)audioRecorderNotifyLeftSecondBeforeExceedLimit:secondsLeftBeforeExceedLimit:;
- (void)configWindowGesture;
- (void)restoreWindowGesture;
- (id)restoreWindowGR;
- (void)p_updateFinalChannelVolume;
- (float)p_normalizedSoundPower;
- (void)p_observeRecorder;
- (void)p_unobserveRecorder;
- (void)touchViewTouchDown;
- (void)p_updateAudioCountDown:;
- (void)touchViewTouchUp;
- (unsigned long long)effectTouchSessionID;
- (void)setEffectTouchSessionID:;
- (unsigned long long)currentTouchSessionID;
- (void)setCurrentTouchSessionID:;
- (void)setRestoreWindowGR:;
- (void)translator:errorOccurred:;
- (void)translator:updateResult:isFinish:;
- (void)translatorDidStart:;
- (void)translatorDidStop:;
- (void)disablePanToPopGR;
- (void)enablePanToPopGR;
- (void)audioRecorderDidFinishRecording:success:action:error:;
- (void)audioRecorderPeriodicTimeRecording:;
- (void)setVmKVO:;
- (id)vmKVO;
- (id)p_generateNewAudioBubbleWithPowers:totalTime:;
- (id)p_generateOldAudioBubbleWithPowers:totalTime:;
- (id)p_rounding:afterPoint:;
- (id)audioIndicatorView;
- (void)p_checkRealRecorderForBizTracker;
- (void)p_trackAudioRecordStartForMethod:;
- (void)p_trackAudioRecordPerformanceWithType:status:errorCode:;
- (void)p_trackAudioRecordFinishedForAction:;
- (BOOL)sendRecordMessageIfNeededWithData:audioRecorder:;
- (void)p_recordCompletionCleanup;
- (id)p_generateAudioBubbleWithPowers:totalTime:;
- (id)prepareQuotedContent;
- (void)p_stopTranslate;
- (void)p_startTranslate;
- (void)audioInputTouchViewTouchUp:action:;
- (void)audioInputTouchViewTouchMoveToRecord:;
- (void)audioInputTouchViewTouchMoveToCancel:;
- (void)audioInputTouchViewTouchMoveToTranslate:;
- (void)audioInputTouchViewTouchUpInside:cancelled:isInTranslate:;
- (BOOL)audioInputTouchViewIsInTranslate:;
- (void)audioInputTouchViewDidTapCancel:;
- (void)audioInputTouchViewDidTapSendAudio:;
- (void)audioInputTouchViewDidTapSendText:content:;
- (void)sendAudioMessageWith:context:onScreen:sendCompletion:;
- (void)setAudioIndicatorView:;
- (void)p_resetTranslateResult;
- (void)setTranslateResult:;
- (void)p_checkTranslationResult;
- (id)translateResult;
- (void)setTranslateLastResult:;
- (void)p_checkTranslationResult:isFinish:;
- (id)translateLastResult;
- (long long)translateLenBuffer;
- (void)setTranslateLenBuffer:;
- (void)setIsMovedToCancel:;
- (void)setStarTrackUserAsrDuration:;
- (BOOL)isMovedToCancel;
- (BOOL)starTrackUserAsrDuration;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (id)inputViewController;
- (id)viewController;
- (void)clear;
- (id)conversationID;
- (void)setRecordData:;
- (id)recordData;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setRecorder:;
- (id)context;
- (void)setViewController:;
- (id)recorder;
- (void)setConversationID:;
- (void)p_updateVolume;
@end
