@interface TTDownloadTracker : NSObject
@property (nonatomic) @? eventBlock;
- (long long)deviceAvailableSpace;
- (id)eventNameWithEvent:;
- (void)sendCancelEventWithModel:;
- (void)sendEvent:eventModel:;
- (void)sendFailEventWithModel:failCode:failMsg:;
- (void)sendFinishEventWithModel:;
- (void)sendUncompleteEventWithModel:;
- (id)statusWithCommonEvent:;
- (void)setEventBlock:;
- (void).cxx_destruct;
- (id)eventBlock;
+ (id)sharedInstance;
@end
