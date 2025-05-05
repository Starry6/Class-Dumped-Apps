@interface SAMorphunDataState : SAAceClientState
@property (nonatomic) NSDictionary assetVersionPerLocale;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)assetVersionPerLocale;
- (void)setAssetVersionPerLocale:;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)morphunDataState;
+ (id)morphunDataStateWithDictionary:context:;
@end
