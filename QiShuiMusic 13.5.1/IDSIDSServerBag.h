@interface IDSIDSServerBag : IDSServerBag
- (id)init;
- (id)_bagDefaultsDomain;
- (BOOL)isInDebilitatedMode;
- (unsigned long long)_bagDomain;
- (BOOL)requiresIDSConnection;
+ (id)_bagCreationLock;
+ (id)defaultBag;
@end
