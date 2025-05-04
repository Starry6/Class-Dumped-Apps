@interface AWEScreenCastProcessor : NSObject
@property (nonatomic) AWEScreenCastItemRequestService itemFetcher;
@property (nonatomic) @? completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEScreenCastProcessorDelegate> delegate;
- (BOOL)canContinuePlay;
- (void)prefetchPlayItemWithModel:;
- (void)fetchPlayItemWithModel:withCompletion:;
- (id)filterUnSupportedModelsWith:;
- (void)screenCastDidFetchPlayItem:onError:;
- (id)getScreenCastURLFromVideoModel:;
- (id)itemFetcher;
- (BOOL)checkExpireURLString:;
- (void)sendUrlExpireEvent;
- (void)setItemFetcher:;
- (id)delegate;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
