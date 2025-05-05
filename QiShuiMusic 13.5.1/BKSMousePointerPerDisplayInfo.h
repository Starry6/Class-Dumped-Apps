@interface BKSMousePointerPerDisplayInfo : NSObject
@property (nonatomic) BSCompoundAssertion pointerSuppressionAssertion;
@property (nonatomic) BSCompoundAssertion globalEventsAssertion;
@property (nonatomic) NSSet previouslyRoutedContextIDs;
- (void).cxx_destruct;
- (id)pointerSuppressionAssertion;
- (void)setPointerSuppressionAssertion:;
- (id)globalEventsAssertion;
- (void)setGlobalEventsAssertion:;
- (id)previouslyRoutedContextIDs;
- (void)setPreviouslyRoutedContextIDs:;
@end
