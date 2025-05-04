@interface AWESegmentList : NSObject
@property (nonatomic) {shared_ptr<std::list<AWESegmentListSubSegmentWrapper *>>=^v^{__shared_weak_count}} segments;
@property (nonatomic) q segmentLimit;
@property (nonatomic) q totalCount;
- (void)updateAllSegmentPos;
- (void)removeElementIfNeed:;
- (void)insertElement:AtIndex:preferredInsertFrontSegment:;
- (id)addArrayAsSegment:extraInfo:atFront:;
- (void)updateSegmentDetailData:extraInfo:withSubSegment:;
- (id)findThePreSegmentWithSegment:;
- (id)findTheNextSegmentWithSegment:;
- (long long)indexForElement:;
- (long long)segmentLimit;
- (void)setSegmentLimit:;
- (id)segments;
- (id)init;
- (id)elementAtIndex:;
- (void)removeElementAtIndex:;
- (void)clearAllData;
- (long long)totalCount;
- (void)setSegments:;
- (id).cxx_construct;
- (id)allData;
- (void).cxx_destruct;
- (void)removeSegment:;
- (id)segmentAtIndex:;
- (void)setTotalCount:;
@end
