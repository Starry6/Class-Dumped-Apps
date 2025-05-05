@interface UIAvoidanceCoordinator : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} avoidanceFrame;
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setAvoidanceFrame:;
- (void).cxx_destruct;
- (id)avoidanceFrame;
- (void)releaseAll:withType:;
- (void)setGroupOfBlockades:forBlockadeIdentifier:;
- (void)addAvoidanceObject:;
- (void)removeAvoidanceObject:;
- (id)findNamesForBlockade:;
- (id)findClientsForBlockade:;
- (id)findBlockadesForName:;
- (void)updateClients:;
@end
