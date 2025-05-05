@interface IXPromisedAppReference : IXOwnedDataPromise
@property (nonatomic) IXPromisedAppReferenceSeed seed;
@property (nonatomic) IXApplicationIdentity identity;
@property (nonatomic) Q installationDomain;
- (id)identity;
- (void)resetWithCompletion:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithSeed:;
- (unsigned long long)installationDomain;
- (id)initWithName:client:forAppWithIdentity:inDomain:ifMatchingPredicate:error:;
- (id)placeholderPromiseForInstallType:withError:;
- (Class)seedClass;
+ (BOOL)supportsSecureCoding;
+ (id)acquireReferenceToAppWithIdentity:inDomain:forClient:ifMatchingPredicate:error:;
+ (id)acquireReferenceToAppWithIdentity:inDomain:forClient:matchingAppInRecord:error:;
@end
