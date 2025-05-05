@interface LynxTouchEvent : LynxEvent
@property (nonatomic) {CGPoint=dd} clientPoint;
@property (nonatomic) {CGPoint=dd} pagePoint;
@property (nonatomic) {CGPoint=dd} viewPoint;
@property (nonatomic) BOOL isMultiTouch;
@property (nonatomic) NSDictionary touchMap;
@property (nonatomic) NSMutableDictionary uiTouchMap;
- (id)clientPoint;
- (id)initWithName:targetTag:;
- (id)initWithName:targetTag:clientPoint:pagePoint:viewPoint:;
- (id)initWithName:targetTag:touchMap:;
- (id)initWithName:targetTag:touchPoint:;
- (id)initWithName:uiTouchMap:;
- (BOOL)isMultiTouch;
- (id)pagePoint;
- (id)touchMap;
- (id)uiTouchMap;
- (id)viewPoint;
- (void).cxx_destruct;
@end
