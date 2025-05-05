@interface ICDelegationPlayInfoResponseToken : NSObject
@property (nonatomic) NSData tokenData;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString storefrontIdentifier;
- (void)setExpirationDate:;
- (void)setStorefrontIdentifier:;
- (id)expirationDate;
- (void)setTokenData:;
- (void).cxx_destruct;
- (id)storefrontIdentifier;
- (id)tokenData;
@end
