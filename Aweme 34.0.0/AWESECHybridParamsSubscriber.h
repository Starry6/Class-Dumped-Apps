@interface AWESECHybridParamsSubscriber : NSObject
@property (nonatomic) NSMutableDictionary eventDicts;
@property (nonatomic) # decisionClass;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)keyTagsDict:;
- (void)setDecisionClass:;
- (Class)decisionClass;
- (id)prepareContextWith:;
- (id)prepareInterestLogWith:;
- (void)setupDecisionMaker:;
- (id)eventDicts;
- (void)setEventDicts:;
- (void)_handleEvent:;
- (void).cxx_destruct;
- (void)handleEvent:;
- (void)report:;
- (id)subscriberId;
@end
