@interface SGMContactDetailConversationTurn : NSObject
@property (nonatomic) PETScalarEventTracker tracker;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:detailExtraction:selfIdName:extractionModelVersion:receivedConverstationTurn:knownSuggestedContactDetail:curatedContactDetail:throughApp:contactDetailUsed:;
@end
