@interface VKCVisualSearchResultItem : NSObject
@property (nonatomic) MADVIVisualSearchGatingResultItem resultItem;
@property (nonatomic) MADVIVisualSearchResultItem searchItem;
@property (nonatomic) Q queryID;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedBoundingBox;
@property (nonatomic) {CGPoint=dd} normalizedIconLocation;
@property (nonatomic) BOOL shouldPlaceInCorner;
@property (nonatomic) NSString glyphName;
@property (nonatomic) MADVIVisualSearchGatingDomainInfo domainInfo;
@property (nonatomic) UIMenu debugMenu;
- (unsigned long long)queryID;
- (void)setQueryID:;
- (void).cxx_destruct;
- (id)glyphName;
- (id)normalizedBoundingBox;
- (id)domainInfo;
- (id)resultItem;
- (void)setResultItem:;
- (id)debugMenu;
- (id)initWithGatingResultItem:domain:;
- (id)initWithSearchResultItem:;
- (id)normalizedIconLocation;
- (BOOL)_hasFocalPoint;
- (BOOL)shouldPlaceInCorner;
- (id)searchItem;
- (void)setSearchItem:;
- (void)setDomainInfo:;
@end
