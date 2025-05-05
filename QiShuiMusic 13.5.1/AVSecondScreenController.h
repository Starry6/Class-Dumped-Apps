@interface AVSecondScreenController : NSObject
@property (nonatomic) AVObservationController observationController;
@property (nonatomic) NSMutableOrderedSet secondScreens;
@property (nonatomic) NSMutableOrderedSet connections;
@property (nonatomic) BOOL allowsUpdatingActiveConnection;
- (id)connections;
- (id)init;
- (void)dealloc;
- (void)setPreferredConnection:;
- (void)removeConnection:;
- (id)observationController;
- (void)_updateActiveConnection;
- (void).cxx_destruct;
- (void)addConnection:;
- (id)addConnectionForPlayer:playerLayer:;
- (BOOL)allowsUpdatingActiveConnection;
- (id)connectionPassingTest:;
- (void)removeSecondScreen:;
- (void)setAllowsUpdatingActiveConnection:;
- (id)preferredConnection;
- (id)secondScreens;
- (void)_insertConnection:atIndex:;
- (id)activeConnection;
- (id)_targetScreen;
- (void)addSecondScreen:;
- (id)_connectionForPlayer:;
+ (id)sharedInstance;
@end
