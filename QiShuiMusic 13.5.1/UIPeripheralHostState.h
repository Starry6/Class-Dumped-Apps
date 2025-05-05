@interface UIPeripheralHostState : NSObject
@property (nonatomic) {UIPeripheralAnimationGeometry={CGPoint=dd}{CGPoint=dd}{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}d} geometry;
@property (nonatomic) NSDictionary screenGeometry;
@property (nonatomic) BOOL inPositionIsDestination;
- (id)geometry;
- (void)setGeometry:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)screenGeometry;
- (void)setScreenGeometry:;
- (BOOL)inPositionIsDestination;
- (void)setInPositionIsDestination:;
+ (id)stateWithGeometry:inPositionIsDestination:;
@end
