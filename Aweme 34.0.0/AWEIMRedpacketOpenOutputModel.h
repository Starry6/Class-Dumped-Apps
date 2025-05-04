@interface AWEIMRedpacketOpenOutputModel : NSObject
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) NSString serverMessageID;
@property (nonatomic) NSString clientMessageID;
@property (nonatomic) q currentStage;
@property (nonatomic) AWEIMRedPacketNLPResponseModel nlpResult;
- (id)serverMessageID;
- (void)setServerMessageID:;
- (void)setClientMessageID:;
- (id)clientMessageID;
- (void)setCurrentStage:;
- (id)nlpResult;
- (void)setNlpResult:;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isSuccess;
- (void)setIsSuccess:;
- (long long)currentStage;
@end
