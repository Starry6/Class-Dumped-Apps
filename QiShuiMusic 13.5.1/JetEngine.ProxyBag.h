@interface JetEngine.ProxyBag : NSObject
@property (nonatomic) BOOL expired;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString profile;
@property (nonatomic) NSString profileVersion;
- (id)init;
- (id)URLForKey:;
- (BOOL)isExpired;
- (id)boolForKey:;
- (id)stringForKey:;
- (id)profile;
- (id)expirationDate;
- (id)arrayForKey:;
- (void).cxx_destruct;
- (id)doubleForKey:;
- (id)profileVersion;
- (void)createSnapshotWithCompletion:;
- (id)integerForKey:;
- (id)dictionaryForKey:;
@end
