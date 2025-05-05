@interface BDCTFlowPerformance : NSObject
@property (nonatomic) double startTimeStamp;
@property (nonatomic) NSMutableDictionary timeStampParams;
@property (nonatomic) BDCTFlow flow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)timeStampParams;
- (void)setStartTimeStamp:;
- (void)setTimeStampParams:;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)flow;
- (void)setFlow:;
- (double)startTimeStamp;
@end
