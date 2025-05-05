@interface BU_IESGurdConfigManager : NSObject
@property (nonatomic) NSMutableArray accessKeysArray;
- (id)accessKeysArray;
- (BOOL)isAccessKeyRegistered:;
- (void)registerAccessKey:;
- (void)setAccessKeysArray:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
