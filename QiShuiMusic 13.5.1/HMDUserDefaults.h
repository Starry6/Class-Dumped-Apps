@interface HMDUserDefaults : NSObject
@property (nonatomic) ^{__CFString=} appNameRef;
@property (nonatomic) NSObject<OS_dispatch_queue> serialSetQueue;
- (id)appNameRef;
- (id)objectForKeyCompatibleWithHistory:;
- (id)serialSetQueue;
- (void)setString:forKey:;
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (void)setBool:forKey:;
- (BOOL)boolForKey:;
- (id)sharedHistory;
- (id)stringForKey:;
- (void)removeAllObjects;
- (id)initWithSuiteName:;
- (void)setInteger:forKey:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (double)doubleForKey:;
- (void)removeObjectForKey:;
- (long long)integerForKey:;
- (id)copyWithZone:;
- (id)dictForKey:;
+ (id)standardUserDefaults;
@end
