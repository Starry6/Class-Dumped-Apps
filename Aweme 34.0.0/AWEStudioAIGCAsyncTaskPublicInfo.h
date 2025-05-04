@interface AWEStudioAIGCAsyncTaskPublicInfo : NSObject
@property (nonatomic) NSString taskID;
@property (nonatomic) NSString aigcType;
@property (nonatomic) Q taskStatus;
@property (nonatomic) q queryType;
@property (nonatomic) q taskType;
- (id)aigcType;
- (id)initWithTaskID:aigcType:taskStatus:queryType:taskType:;
- (long long)taskType;
- (long long)queryType;
- (void).cxx_destruct;
- (id)taskID;
- (unsigned long long)taskStatus;
@end
