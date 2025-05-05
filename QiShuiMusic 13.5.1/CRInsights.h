@interface CRInsights : NSObject
@property (nonatomic) NSMutableDictionary threadsToContexts;
@property (nonatomic) <CRInsightsDelegate> delegate;
- (id)init;
- (void)setDelegate:;
- (id)currentContext;
- (id)delegate;
- (void).cxx_destruct;
- (void)setContextValue:forKey:;
- (id)takeContextSnapshot;
- (void)attachNewContextToCurrentThreadWithCameraReader:;
- (void)attachContextToCurrentThread:;
- (void)attachContextCopyToCurrentThread:;
- (void)resetContextForCurrentThread;
- (id)cameraReaderForCurrentThread;
- (void)notifySampleBufferProcessingStart:;
- (void)notifySampleBufferProcessingEnd:;
- (void)provideInsightValue:forKey:;
- (id)enterSection:withDescription:;
- (void)leaveSection:;
- (id)allowOverrideWithKey:forResultFromBlock:;
- (id)allowOverrideWithKey:forValue:;
- (id)threadsToContexts;
- (void)setThreadsToContexts:;
+ (id)sharedInsights;
+ (void)dispatchAsyncOnQueue:block:;
@end
