@interface AWEStudioAIGCTaskTransformOutput : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSString taskID;
@property (nonatomic) NSError error;
- (id)initWithSuccess:taskID:error:;
- (void).cxx_destruct;
- (id)error;
- (id)taskID;
- (BOOL)success;
@end
