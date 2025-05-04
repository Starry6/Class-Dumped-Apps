@interface AWEStudioAIGCTaskTransformInput : NSObject
@property (nonatomic) NSString taskID;
@property (nonatomic) NSString bizType;
@property (nonatomic) BOOL isAsync;
- (id)bizType;
- (id)initWithTaskID:bizType:isAsync:;
- (void).cxx_destruct;
- (id)taskID;
- (BOOL)isAsync;
@end
