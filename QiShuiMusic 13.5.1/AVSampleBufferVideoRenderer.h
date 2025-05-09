@interface AVSampleBufferVideoRenderer : NSObject
@property (nonatomic) BOOL outputObscuredDueToInsufficientExternalProtection;
@property (nonatomic) BOOL preventsCapture;
@property (nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback;
@property (nonatomic) NSArray outputs;
@property (nonatomic) NSString STSLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (BOOL)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:usingBlock:;
- (id)error;
- (void)stopRequestingMediaData;
- (void)flush;
- (void)removeOutput:;
- (void)setSTSLabel:;
- (id)outputs;
- (void).cxx_destruct;
- (id)description;
- (long long)status;
- (void)addOutput:;
- (void)setToneMapToStandardDynamicRange:;
- (void)setPreventsDisplaySleepDuringVideoPlayback:;
- (id)_displayLayer;
- (id)_STSLabel;
- (id)videoPerformanceMetrics;
- (id)copyDisplayedPixelBuffer;
- (id)contentKeySession;
- (BOOL)preventsDisplaySleepDuringVideoPlayback;
- (BOOL)outputObscuredDueToInsufficientExternalProtection;
- (void)_didFinishSuspension:;
- (void)addVideoTarget:;
- (id)timebase;
- (void)_refreshAboveHighWaterLevel;
- (void)copyFigSampleBufferAudioRenderer:;
- (BOOL)setRenderSynchronizer:error:;
- (void)enqueueSampleBuffer:;
- (BOOL)hasSufficientMediaDataForReliablePlaybackStart;
- (int)createVideoQueue:;
- (void)setControlTimebase:;
- (BOOL)_setSynchronizerTimebase:error:;
- (id)_readOnlyVideoQueueTimebase;
- (int)_initializeTimebases;
- (int)_createVideoQueue:errorStep:;
- (BOOL)_isCreateVideoQueueErrorRetryable:;
- (id)_copyVideoQueue;
- (BOOL)_hasEverEnqueued;
- (void)_setStatus:error:;
- (void)_resetStatusWithOSStatus:;
- (void)_setOutputObscuredDueToInsufficientExternalProtection:;
- (id)currentFigVideoQueueFactory;
- (void)_addFigVideoQueueListeners;
- (void)_removeFigVideoQueueListeners;
- (void)_setRequiresFlushToResumeDecoding:;
- (void)_setCreateVideoQueueFailedWithOSStatus:;
- (BOOL)_createVideoQueueFailed;
- (id)controlTimebase;
- (void)setDisplayLayerVisibility:;
- (id)_STSLabelPublisher;
- (void)setContentKeySession:;
- (int)attachToContentKeySession:contentKeyBoss:failedSinceAlreadyAttachedToAnotherSession:;
- (BOOL)attachedToExternalContentKeySession;
- (int)_enqueueSingleSampleBuffer:bufferEnqueueingInfo:;
- (void)enqueueSampleBuffer:bufferEnqueueingInfo:;
- (void)flushAndRemoveImage;
- (void)flushWithRemovalOfDisplayedImage:completionHandler:;
- (void)_flushComplete;
- (void)_callOldPrerollCompletionHandlerWithSuccess:andSetNewPrerollCompletionHandler:forRequestID:;
- (void)_completedDecodeForPrerollForRequestID:;
- (void)prerollDecodeWithCompletionHandler:;
- (BOOL)requiresFlushToResumeDecoding;
- (void)addSampleBufferDisplayLayer:;
- (void)_updateVideoTargetsOnVideoQueue;
- (int)_setContentLayerOnFigVideoQueue:;
- (void)setPreventsCapture:;
- (BOOL)preventsCapture;
- (BOOL)_setUpcomingPresentationTimeExpectations:minimumPresentationTime:;
- (void)expectMinimumUpcomingSampleBufferPresentationTime:;
- (void)expectMonotonicallyIncreasingUpcomingSampleBufferPresentationTimes;
- (void)resetUpcomingSampleBufferPresentationTimeExpectations;
- (void)_updateVideoOutputs;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end
