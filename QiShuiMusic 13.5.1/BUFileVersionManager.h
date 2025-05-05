@interface BUFileVersionManager : NSObject
@property (nonatomic) NSMutableDictionary version;
- (void)saveVersion:;
- (void)updateVersion:path:;
- (id)versionAtPath:;
- (id)init;
- (void)setVersion:;
- (id)version;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
