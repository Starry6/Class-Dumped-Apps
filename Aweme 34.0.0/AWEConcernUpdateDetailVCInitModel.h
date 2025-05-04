@interface AWEConcernUpdateDetailVCInitModel : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) Q enterFrom;
@property (nonatomic) <AWEConcernRecentUpdateUnreadListPageHandlerProtocol> pageHandler;
@property (nonatomic) @? willDisappearBlock;
- (void)setEnterFrom:;
- (void)setLogExtra:;
- (id)logExtra;
- (unsigned long long)enterFrom;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
- (void)setPageHandler:;
- (id)pageHandler;
- (void)setWillDisappearBlock:;
- (id)willDisappearBlock;
@end
