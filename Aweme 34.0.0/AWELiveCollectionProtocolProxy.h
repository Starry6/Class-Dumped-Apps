@interface AWELiveCollectionProtocolProxy : NSObject
@property (nonatomic) <AWELiveCollectionProtocol> delegate;
@property (nonatomic) <HTSLiveRoomCollectionDataObserver> dataObserver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMore;
- (BOOL)canLoadMore;
- (void)loadMore:completion:;
- (void)changeToIndex:;
- (id)initWithCollectionDelegate:;
- (id)delegate;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setDataObserver:;
- (void)setDelegate:;
- (id)dataObserver;
@end
