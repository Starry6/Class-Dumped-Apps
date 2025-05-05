@interface UIInputSwitcherGestureState : NSObject
@property (nonatomic) BOOL didMoveBeyondThreshold;
@property (nonatomic) BOOL hideSwitcher;
@property (nonatomic) {CGPoint=dd} firstReferencePoint;
@property (nonatomic) double touchDown;
@property (nonatomic) double lastSeenKeyboardTouchDown;
- (double)touchDown;
- (BOOL)hideSwitcher;
- (BOOL)gestureConflictsWithTypingWindow;
- (BOOL)didMoveBeyondThreshold;
- (void)setDidMoveBeyondThreshold:;
- (void)setHideSwitcher:;
- (id)firstReferencePoint;
- (void)setFirstReferencePoint:;
- (void)setTouchDown:;
- (double)lastSeenKeyboardTouchDown;
- (void)setLastSeenKeyboardTouchDown:;
@end
