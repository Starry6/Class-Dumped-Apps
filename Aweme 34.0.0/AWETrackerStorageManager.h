@interface AWETrackerStorageManager : NSObject
@property (nonatomic) @? boolGetter;
@property (nonatomic) @? boolSetter;
@property (nonatomic) @? objGetter;
@property (nonatomic) @? objSetter;
- (id)objGetter;
- (id)boolGetter;
- (id)boolSetter;
- (id)objSetter;
- (void)setBoolGetter:;
- (void)setBoolSetter:;
- (void)setObjGetter:;
- (void)setObjSetter:;
- (id)init;
- (void).cxx_destruct;
+ (id)actualKey:;
+ (void)setupBoolGetter:setter:;
+ (void)setupObjGetter:setter:;
+ (id)sharedInstance;
+ (void)setBool:forKey:;
+ (id)objectForKey:;
+ (BOOL)boolForKey:;
+ (void)setObject:forKey:;
@end
