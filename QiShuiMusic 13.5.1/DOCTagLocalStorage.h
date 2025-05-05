@interface DOCTagLocalStorage : NSObject
@property (nonatomic) q tagSerialNumber;
@property (nonatomic) NSUserDefaults userDefaults;
@property (nonatomic) NSOrderedSet userTags;
@property (nonatomic) NSOrderedSet discoveredTags;
- (void)setUserDefaults:;
- (id)init;
- (id)userDefaults;
- (void).cxx_destruct;
- (void)setUserTags:;
- (id)userTags;
- (long long)tagSerialNumber;
- (void)setTagSerialNumber:;
- (id)discoveredTags;
- (void)setDiscoveredTags:;
- (id)_unarchivedTagsFromData:;
+ (id)sharedAppGroupStorage;
@end
