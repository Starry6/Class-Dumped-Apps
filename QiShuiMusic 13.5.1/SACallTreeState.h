@interface SACallTreeState : SACallTreeNode
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithWaitInfo:turnstileInfo:state:microstackshotState:pid:threadId:threadPriority:timeRange:startSampleIndex:sampleCount:;
- (id)debugDescription;
- (void)writeJSONDictionaryEntriesToStream:;
- (void).cxx_destruct;
@end
