@interface AWESearchAIGCSAMIAssistantHandleStatus : NSObject
@property (nonatomic) BOOL isHandleCreated;
@property (nonatomic) BOOL isConnectRequested;
@property (nonatomic) q connectState;
@property (nonatomic) q taskStatus;
@property (nonatomic) q sessionStatus;
@property (nonatomic) q ttsStatus;
- (void)setTaskStatus:;
- (long long)connectState;
- (void)setConnectState:;
- (BOOL)isHandleCreated;
- (void)setIsHandleCreated:;
- (BOOL)isConnectRequested;
- (void)setIsConnectRequested:;
- (long long)ttsStatus;
- (void)setTtsStatus:;
- (id)init;
- (void)setSessionStatus:;
- (long long)sessionStatus;
- (long long)taskStatus;
@end
