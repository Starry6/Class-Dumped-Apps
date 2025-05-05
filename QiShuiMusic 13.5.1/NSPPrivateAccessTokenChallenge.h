@interface NSPPrivateAccessTokenChallenge : NSObject
@property (nonatomic) S tokenType;
@property (nonatomic) NSString issuerName;
@property (nonatomic) NSData redemptionNonce;
@property (nonatomic) NSString originName;
@property (nonatomic) NSArray originNames;
@property (nonatomic) BOOL isSupportedTokenType;
@property (nonatomic) BOOL typeRequiresOriginName;
@property (nonatomic) BOOL typeRequiresRedemptionNonce;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)typeRequiresOriginName;
- (BOOL)typeRequiresRedemptionNonce;
- (id)originNames;
- (id)originName;
- (unsigned short)tokenType;
- (BOOL)isSupportedTokenType;
- (id)issuerName;
- (id)redemptionNonce;
+ (id)httpAuthenticationScheme;
+ (id)originNameKeyAttributeName;
+ (id)challengeAttributeName;
+ (id)tokenKeyAttributeName;
@end
