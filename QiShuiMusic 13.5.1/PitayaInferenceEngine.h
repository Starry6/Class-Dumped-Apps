@interface PitayaInferenceEngine : NSObject
@property (nonatomic) NSString taskName;
@property (nonatomic) Q taskType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTaskName:taskType:;
- (void)predictWithParam:engineCallback:;
- (id)init;
- (unsigned long long)taskType;
- (void)prepare;
- (id)taskName;
- (void)setTaskName:;
- (void).cxx_destruct;
- (void)setTaskType:;
- (id)initWithTaskName:;
- (id)initWithTaskType:;
@end
