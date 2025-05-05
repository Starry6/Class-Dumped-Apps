@interface IESLiveMessageProcesser : NSObject
@property (nonatomic) IESLiveMessageProcesser next;
@property (nonatomic) <IESLiveMessageProcessOutput> output;
@property (nonatomic) q priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)next;
- (void)setNext:;
- (id)output;
- (void)setPriority:;
- (BOOL)process:;
- (void)setOutput:;
- (void).cxx_destruct;
- (long long)priority;
@end
