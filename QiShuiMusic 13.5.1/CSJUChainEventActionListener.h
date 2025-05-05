@interface CSJUChainEventActionListener : NSObject
@property (nonatomic) BUThreadSafeDictionary uchainEventTrackerData;
@property (nonatomic) CSJMaterialMeta material;
@property (nonatomic) BOOL eventActionSuccess;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)eventActionSuccess;
- (void)onRunFail:context:;
- (void)onRunSuccess:context:;
- (void)p_uchainEventTrackerReport;
- (void)setEventActionSuccess:;
- (void)setUchainEventTrackerData:;
- (void)startEventChain:;
- (id)uchainEventTrackerData;
- (void)dealloc;
- (void).cxx_destruct;
- (id)material;
- (void)startEvent:;
- (void)setMaterial:;
- (id)initWithMaterial:;
+ (id)actionListenerWithMaterial:;
@end
