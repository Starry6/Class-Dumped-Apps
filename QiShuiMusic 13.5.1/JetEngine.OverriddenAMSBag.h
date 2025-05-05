@interface JetEngine.OverriddenAMSBag : AMSSnapshotBag
@property (nonatomic) BOOL expired;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString profile;
@property (nonatomic) NSString profileVersion;
@property (nonatomic) <AMSBagProtocol> replacingSnapshotIfNeeded;
- (id)init;
- (id)URLForKey:;
- (void)dealloc;
- (BOOL)isExpired;
- (id)boolForKey:;
- (id)stringForKey:;
- (id)profile;
- (id)expirationDate;
- (id)arrayForKey:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)doubleForKey:;
- (id)profileVersion;
- (void)createSnapshotWithCompletion:;
- (id)integerForKey:;
- (id)dictionaryForKey:;
- (void)forwardSnapshotBagExpiredValueAccessed:;
- (id)replacingSnapshotIfNeeded;
@end
