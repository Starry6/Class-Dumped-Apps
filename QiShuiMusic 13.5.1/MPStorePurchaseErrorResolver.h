@interface MPStorePurchaseErrorResolver : MPAVErrorResolver
@property (nonatomic) NSNumber storeAccountIdentifier;
- (void).cxx_destruct;
- (void)resolveError:;
- (id)initWithStoreAccountIdentifier:;
- (id)storeAccountIdentifier;
@end
