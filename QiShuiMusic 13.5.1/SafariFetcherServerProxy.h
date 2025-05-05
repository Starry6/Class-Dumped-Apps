@interface SafariFetcherServerProxy : NSObject
@property (nonatomic) <WebBookmarksClientDelegateProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setDelegate:;
- (void)connection:didCloseWithError:;
- (id)delegate;
- (void).cxx_destruct;
- (void)startReadingListFetcher;
- (void)clearAllReadingListArchives;
- (void)clearReadingListArchiveWithUUID:;
- (void)didStartFetchingReadingListItemWithMessage:;
- (void)didStopFetchingReadingListItemWithMessage:;
- (void)didUpdateProgressWithMessage:;
- (void)didFinishFetching;
@end
