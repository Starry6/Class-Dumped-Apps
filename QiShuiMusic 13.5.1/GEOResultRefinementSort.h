@interface GEOResultRefinementSort : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) NSArray sorts;
@property (nonatomic) NSNumber selectedElementIndex;
@property (nonatomic) NSNumber defaultSelectedElementIndex;
- (void)setSorts:;
- (void)setDisplayName:;
- (id)displayName;
- (void).cxx_destruct;
- (id)sorts;
- (id)initWithDisplayName:sorts:selectedElementIndex:defaultSelectedElementIndex:;
- (id)initWithResultRefinementSort:;
- (id)convertToGEOPDResultRefinementSort;
- (id)selectedElementIndex;
- (void)setSelectedElementIndex:;
- (id)defaultSelectedElementIndex;
- (void)setDefaultSelectedElementIndex:;
@end
