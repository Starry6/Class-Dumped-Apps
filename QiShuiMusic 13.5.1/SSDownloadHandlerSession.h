@interface SSDownloadHandlerSession : SSDownloadSession
@property (nonatomic) NSString downloadPhase;
@property (nonatomic) NSNumber duetTimeoutInterval;
@property (nonatomic) BOOL blocksOtherDownloads;
@property (nonatomic) BOOL canBePaused;
@property (nonatomic) BOOL needsPowerAssertion;
- (void)dealloc;
- (void)setPercentComplete:;
- (id)_initWithMessage:controlConnection:;
- (BOOL)blocksOtherDownloads;
- (BOOL)canBePaused;
- (void)disavowSessionWithError:;
- (id)downloadPhase;
- (void)finishSessionWithSuccess:error:;
- (BOOL)needsPowerAssertion;
- (void)releaseSessionControl;
- (void)setBlocksOtherDownloads:;
- (void)setCanBePaused:;
- (void)setNeedsPowerAssertion:;
- (void)setStatusDescription:;
- (void)_finishWithType:error:;
- (void)_setBool:forSessionProperty:;
- (id)duetTimeoutInterval;
@end
