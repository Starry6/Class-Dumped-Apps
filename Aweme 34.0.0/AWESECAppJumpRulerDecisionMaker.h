@interface AWESECAppJumpRulerDecisionMaker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pipelineCheck:withEvent:;
- (id)rulerCheck:withEvent:;
@end
