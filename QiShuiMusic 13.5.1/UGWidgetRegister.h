@interface UGWidgetRegister : NSObject
@property (nonatomic) NSMutableDictionary behaviorMap;
- (void)setBehaviorMap:;
- (id)behaviorMap;
- (id)createWidgetWithName:;
- (id)init;
- (void)addBehavior:;
- (void).cxx_destruct;
@end
