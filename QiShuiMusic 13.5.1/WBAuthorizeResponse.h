@interface WBAuthorizeResponse : WBBaseResponse
@property (nonatomic) NSString userID;
@property (nonatomic) NSString accessToken;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString refreshToken;
- (BOOL)canBeReceived;
- (void)storeToDictionary:;
- (id)validate;
- (id)userID;
- (void)setExpirationDate:;
- (id)expirationDate;
- (id)accessToken;
- (void).cxx_destruct;
- (id)refreshToken;
- (void)setUserID:;
- (BOOL)canBeSent;
- (void)setAccessToken:;
- (void)loadFromDictionary:;
- (void)setRefreshToken:;
@end
