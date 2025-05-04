@interface AWEPublishInfiniTaskAutoRetryStrategy : NSObject
@property (nonatomic) BOOL forceUpdateAuthKey;
@property (nonatomic) BOOL jumpMerge;
@property (nonatomic) BOOL jumpUpload;
@property (nonatomic) double uploadStageRetryDelay;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorStrageType;
@property (nonatomic) NSString errorMsg;
- (void)setErrorMsg:;
- (id)errorMsg;
- (double)uploadStageRetryDelay;
- (BOOL)forceUpdateAuthKey;
- (BOOL)jumpMerge;
- (BOOL)jumpUpload;
- (id)errorStrageType;
- (void)setForceUpdateAuthKey:;
- (void)setJumpMerge:;
- (void)setJumpUpload:;
- (void)setUploadStageRetryDelay:;
- (void)setErrorStrageType:;
- (void)setErrorCode:;
- (long long)errorCode;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:;
+ (id)strategyWithStage:;
+ (id)autoRetryStrategy:;
@end
