@interface BMBookmarkablePublisher : BPSPublisher
@property (nonatomic) NSArray bookmarkableUpstreams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)last;
- (void)subscribe:;
- (id)bookmarkableUpstreams;
- (id)withBookmark:;
- (BOOL)canStoreInternalStateInBookmark;
- (id)collect;
- (id)mapWithTransform:;
- (id)mergeWithOther:;
- (id)filterWithIsIncluded:;
- (id)flatMapWithTransform:;
- (id)reduceWithInitial:nextPartialResult:;
- (id)groupByKey:;
- (id)bufferWithSize:prefetch:whenFull:;
- (id)scanWithInitial:nextPartialResult:;
- (id)correlateWithCurrent:comparator:correlateHandler:;
- (id)mergeWithOthers:;
- (id)reduce:;
- (id)orderedMergeWithOther:comparator:;
- (id)orderedMergeWithOthers:comparator:;
- (id)multicastSubject:;
- (id)multicastCreateSubject:;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
