@interface TIKeyboardTouchEvent : NSObject
@property (nonatomic) NSInteger stage;
@property (nonatomic) {CGPoint=dd} location;
@property (nonatomic) double radius;
@property (nonatomic) double timestamp;
@property (nonatomic) q pathIndex;
@property (nonatomic) NSInteger fingerID;
@property (nonatomic) q forcedKeyCode;
@property (nonatomic) NSInteger continuousPathState;
- (int)stage;
- (id)shortDescription;
- (double)radius;
- (id)initWithCoder:;
- (id)location;
- (void)encodeWithCoder:;
- (double)timestamp;
- (id)description;
- (long long)pathIndex;
- (int)fingerID;
- (int)continuousPathState;
- (id)initWithStage:location:radius:timestamp:pathIndex:fingerID:forcedKeyCode:continuousPathState:;
- (long long)forcedKeyCode;
+ (BOOL)supportsSecureCoding;
+ (id)touchEventWithStage:location:radius:timestamp:pathIndex:forcedKeyCode:;
+ (id)touchEventWithStage:location:radius:timestamp:pathIndex:fingerID:forcedKeyCode:;
+ (id)touchEventWithStage:location:radius:timestamp:pathIndex:fingerID:forcedKeyCode:continuousPathState:;
@end
