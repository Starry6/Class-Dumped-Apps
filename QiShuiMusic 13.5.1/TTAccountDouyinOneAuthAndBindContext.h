@interface TTAccountDouyinOneAuthAndBindContext : NSObject
@property (nonatomic) BOOL isBind;
@property (nonatomic) BOOL didRefreshToken;
@property (nonatomic) BOOL isUpdateAuthorizeConflict;
@property (nonatomic) TTAccountAuthResponse authResponse;
@property (nonatomic) NSArray subResults;
- (BOOL)didRefreshToken;
- (BOOL)isBind;
- (BOOL)isUpdateAuthorizeConflict;
- (void)setAuthResponse:;
- (void)setDidRefreshToken:;
- (void)setIsBind:;
- (void)setIsUpdateAuthorizeConflict:;
- (void)updateResultWithType:error:;
- (id)init;
- (void).cxx_destruct;
- (id)subResults;
- (void)setSubResults:;
- (id)authResponse;
@end
