@interface MPMediaQuerySectionInfo : NSObject
@property (nonatomic) NSArray sectionIndexTitles;
@property (nonatomic) NSArray sections;
@property (nonatomic) BOOL hasUnknownSection;
@property (nonatomic) Q count;
- (id)sections;
- (unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)sectionIndexTitles;
- (id)description;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (id)copyWithZone:;
- (void)setSectionIndexTitles:;
- (BOOL)hasUnknownSection;
- (void)setHasUnknownSection:;
+ (BOOL)supportsSecureCoding;
@end
