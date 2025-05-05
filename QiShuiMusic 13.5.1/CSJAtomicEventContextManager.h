@interface CSJAtomicEventContextManager : NSObject
@property (nonatomic) NSMutableDictionary paramsCenter;
- (id)createEventParamWithSceneKey:;
- (id)getEventParamWithSceneKey:;
- (id)p_paramForKey:;
- (void)p_removeAllParams;
- (void)p_removeParamForKey:;
- (void)p_setParam:forKey:;
- (id)paramsCenter;
- (void)removeEventParamWithSceneKey:;
- (void)setParamsCenter:;
- (id)init;
- (id)copy;
- (id)mutableCopy;
- (void)clear;
- (void).cxx_destruct;
+ (id)eventParamWithSceneKey:;
+ (id)allocWithZone:;
+ (id)manager;
@end
