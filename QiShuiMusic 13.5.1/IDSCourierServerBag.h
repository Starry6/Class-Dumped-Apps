@interface IDSCourierServerBag : IDSServerBag
- (id)init;
- (id)_bagDefaultsDomain;
- (unsigned long long)_bagDomain;
+ (id)_bagCreationLock;
+ (id)sharedInstance;
+ (id)_sharedInstanceForClass:;
@end
