@interface PPReranker : NSObject
@property (nonatomic) NSString clientIdentifier;
- (id)init;
- (void)registerFeedback:completion:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (id)initWithNamedEntityStore:;
- (id)_lazyLoadEntityRankMapWithError:;
- (id)rerankedMediaItems:error:;
@end
