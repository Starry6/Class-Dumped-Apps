@interface VIRegionOfInterestResult : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedBoundingBox;
@property (nonatomic) NSArray resultItems;
@property (nonatomic) NSArray searchSections;
- (id)resultItems;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)searchSections;
- (id)normalizedBoundingBox;
- (id)initWithNormalizedBoundingBox:resultItems:searchSections:;
@end
