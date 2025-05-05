@interface GEOResultRefinementSection : NSObject
@property (nonatomic) NSString sectionHeader;
@property (nonatomic) NSArray resultRefinements;
@property (nonatomic) q refinementsType;
- (id)sectionHeader;
- (void).cxx_destruct;
- (void)setSectionHeader:;
- (id)resultRefinements;
- (void)setResultRefinements:;
- (id)initWithSectionHeader:resultRefinements:;
- (id)initWithResultRefinementSection:;
- (id)convertToGEOPDResultRefinementSection;
- (long long)refinementsType;
- (void)setRefinementsType:;
@end
