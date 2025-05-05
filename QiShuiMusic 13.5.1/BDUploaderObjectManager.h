@interface BDUploaderObjectManager : NSObject
@property (nonatomic) NSMapTable weakObjectMap;
- (id)objectBykey:;
- (void)setWeakObjectMap:;
- (id)weakObjectMap;
- (id)init;
- (void)setObject:forKey:;
- (void).cxx_destruct;
- (void)async:;
+ (id)sharedManager;
@end
