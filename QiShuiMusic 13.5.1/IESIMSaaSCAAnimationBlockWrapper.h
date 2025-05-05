@interface IESIMSaaSCAAnimationBlockWrapper : NSObject
@property (nonatomic) @? startedBlock;
@property (nonatomic) @? completedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)completedBlock;
- (id)initWithStartedBlock:completedBlock:;
- (void)setCompletedBlock:;
- (void)setStartedBlock:;
- (id)startedBlock;
- (void)animationDidStart:;
- (void)animationDidStop:finished:;
- (void).cxx_destruct;
@end
