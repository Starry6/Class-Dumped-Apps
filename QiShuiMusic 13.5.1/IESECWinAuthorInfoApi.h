@interface IESECWinAuthorInfoApi : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString passThroughAPI;
@property (nonatomic) NSInteger tabType;
- (int)tabType;
- (void)fetchWindowHeaderWithCompletion:;
- (id)passThroughAPI;
- (id)secUserID;
- (void)setPassThroughAPI:;
- (void)setSecUserID:;
- (void)setTabType:;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
@end
