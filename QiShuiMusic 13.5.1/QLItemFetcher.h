@interface QLItemFetcher : NSObject
@property (nonatomic) q fetchingState;
@property (nonatomic) NSNumber itemSize;
- (id)init;
- (void)_notifyObservers;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)itemSize;
- (void).cxx_destruct;
- (void)unregisterObserver:;
- (id)newItemProvider;
- (void)fetchContentWithAllowedOutputClasses:inQueue:updateBlock:completionBlock:;
- (BOOL)isLongFetchOperation;
- (BOOL)canBeCanceled;
- (id)shareableItem;
- (id)fetchedContent;
- (void)prepareShareableItem:;
- (void)registerObserver:withBlock:;
- (void)setFetchingState:;
- (void)cancelFetch;
- (long long)fetchingState;
+ (BOOL)supportsSecureCoding;
@end
