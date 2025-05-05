@interface RxCollectionCompositionalLayoutSolverBookmarkStateSnapshotter : NSObject
@property (nonatomic) q originalSectionIndex;
- (void)applyStateToBookmark:effectiveContentInsets:;
- (id)initWithBookmark:originalSectionIndex:;
- (long long)originalSectionIndex;
- (void).cxx_destruct;
@end
