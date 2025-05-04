@interface AWEIMMessageInteractiveDataManager : NSObject
@property (nonatomic) BOOL isFetchingExchangeInfo;
@property (nonatomic) <AWEIMMessageInteractiveDataDelegate> delegate;
@property (nonatomic) AWEIMMessage mesasge;
@property (nonatomic) NSArray doubleLikeUserList;
@property (nonatomic) NSArray readUserList;
- (void)setDoubleLikeUserList:;
- (void)fetchWatchOnceReadInfo;
- (void)__configReadUserList;
- (id)mesasge;
- (void)setReadUserList:;
- (void)setMesasge:;
- (id)doubleLikeUserList;
- (id)readUserList;
- (BOOL)isFetchingExchangeInfo;
- (void)setIsFetchingExchangeInfo:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
