@interface BWTOFAssistedAutoFocusEstimatorAnalyticsPayload : NSObject
@property (nonatomic) NSString portType;
@property (nonatomic) NSDictionary estimatorResults;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)portType;
- (id)init;
- (void)dealloc;
- (void)setPortType:;
- (id)eventName;
- (void)reset;
- (id)eventDictionary;
- (id)estimatorResults;
- (void)setEstimatorResults:;
@end
