@interface TSPKPermissionAspectorCenter : NSObject
@property (nonatomic) NSMutableArray aspectors;
- (void)removeAspector:;
- (void)addAspector:;
- (id)aspectors;
- (void)invokeAspectors:;
- (void)setAspectors:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
