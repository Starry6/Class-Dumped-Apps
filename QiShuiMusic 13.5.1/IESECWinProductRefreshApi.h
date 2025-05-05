@interface IESECWinProductRefreshApi : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSArray refreshParams;
@property (nonatomic) NSString passThroughAPI;
- (void)fetchWindowProductRefreshDataWithCompletion:;
- (id)passThroughAPI;
- (id)refreshParams;
- (id)secUserID;
- (void)setPassThroughAPI:;
- (void)setRefreshParams:;
- (void)setSecUserID:;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
@end
