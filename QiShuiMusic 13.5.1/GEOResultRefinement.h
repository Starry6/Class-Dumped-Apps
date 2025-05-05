@interface GEOResultRefinement : NSObject
@property (nonatomic) q type;
@property (nonatomic) GEOResultRefinementToggle toggle;
@property (nonatomic) GEOResultRefinementMultiSelect multiSelect;
@property (nonatomic) GEOResultRefinementSort sort;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (id)sort;
- (id)initWithToggle:;
- (id)initWithMultiSelect:;
- (id)initWithSort:;
- (id)initWithResultRefinement:;
- (id)convertToGEOPDResultRefinement;
- (id)toggle;
- (void)setToggle:;
- (id)multiSelect;
- (void)setMultiSelect:;
- (void)setSort:;
@end
