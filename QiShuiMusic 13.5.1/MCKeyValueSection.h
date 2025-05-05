@interface MCKeyValueSection : NSObject
@property (nonatomic) NSString sectionTitle;
@property (nonatomic) NSString sectionFooter;
@property (nonatomic) NSArray sectionKeyValues;
- (void).cxx_destruct;
- (id)sectionTitle;
- (void)setSectionTitle:;
- (id)initWithSectionTitle:footer:keyValues:;
- (id)sectionFooter;
- (void)setSectionFooter:;
- (id)sectionKeyValues;
- (void)setSectionKeyValues:;
+ (id)sectionWithKeyValues:;
+ (id)sectionWithLocalizedArray:title:footer:;
@end
