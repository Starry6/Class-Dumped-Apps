@interface UIInteractionProgress : NSObject
@property (nonatomic) double percentComplete;
@property (nonatomic) double velocity;
- (double)velocity;
- (id)init;
- (double)percentComplete;
- (void)removeProgressObserver:;
- (void)setPercentComplete:;
- (void)endInteraction:;
- (void).cxx_destruct;
- (id)description;
- (void)addProgressObserver:;
- (void)endInteraction:finalVelocity:;
- (unsigned long long)_indexOfObserver:;
- (long long)numberOfObservers;
@end
