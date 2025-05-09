@interface TTVideoEngineEventOneError : NSObject
@property (nonatomic) TTVideoEngineEventBase eventBase;
@property (nonatomic) q errorType;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorStage;
@property (nonatomic) BOOL isFirstFrameShown;
@property (nonatomic) q retryCount;
@property (nonatomic) q vsc;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVsc:;
- (long long)vsc;
- (void)errorHappened:;
- (id)errorStage;
- (void)errorStatusHappened:;
- (id)eventBase;
- (id)initWithEventBase:;
- (BOOL)isFirstFrameShown;
- (void)moviePlayRetryWithError:strategy:apiver:;
- (void)sendErrorEvent;
- (void)setErrorStage:;
- (void)setEventBase:;
- (void)setIsFirstFrameShown:;
- (void)showedFirstFrame;
- (long long)errorCode;
- (void)setRetryCount:;
- (long long)retryCount;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (id)jsonDict;
- (long long)errorType;
- (void)setErrorType:;
@end
