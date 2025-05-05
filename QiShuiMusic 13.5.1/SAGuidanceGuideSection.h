@interface SAGuidanceGuideSection : SADomainObject
@property (nonatomic) NSArray guideUtterances;
@property (nonatomic) NSString sectionName;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)guideUtterances;
- (void)setGuideUtterances:;
- (id)sectionName;
- (void)setSectionName:;
+ (id)guideSection;
+ (id)guideSectionWithDictionary:context:;
@end
