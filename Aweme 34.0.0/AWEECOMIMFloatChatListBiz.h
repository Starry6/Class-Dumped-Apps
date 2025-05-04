@interface AWEECOMIMFloatChatListBiz : AWEECOMIMChatListBiz
@property (nonatomic) BOOL isFullPage;
- (BOOL)isFullPage;
- (void)setIsFullPage:;
- (void)fetchIMTopNotifyInfoWithCompletion:;
- (void)createTopNotifyDataSource;
@end
