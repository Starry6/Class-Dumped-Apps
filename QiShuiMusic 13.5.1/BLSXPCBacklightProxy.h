@interface BLSXPCBacklightProxy : NSObject
@property (nonatomic) q backlightState;
@property (nonatomic) q flipbookState;
@property (nonatomic) BOOL transitioning;
@property (nonatomic) BOOL alwaysOnEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)flipbookState;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (BOOL)isTransitioning;
- (BOOL)isAlwaysOnEnabled;
- (void).cxx_destruct;
- (long long)backlightState;
- (id)performChangeRequest:;
- (void)invalidate;
- (id)didCompleteUpdateToState:forEvent:;
- (id)didChangeAlwaysOnEnabled:;
@end
