@interface VSSetTopBoxProfile : NSObject
@property (nonatomic) NSString providerID;
@property (nonatomic) NSString userToken;
@property (nonatomic) NSDate activationTime;
@property (nonatomic) BOOL isDeveloper;
- (id)providerID;
- (id)userToken;
- (void)setProviderID:;
- (void).cxx_destruct;
- (id)description;
- (void)setUserToken:;
- (id)copyWithZone:;
- (id)activationTime;
- (void)setActivationTime:;
- (BOOL)isDeveloper;
- (id)initWithProviderID:userToken:activationTime:isDeveloper:;
- (void)setIsDeveloper:;
@end
