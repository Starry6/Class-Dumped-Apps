@interface SAUSTitleCardSection : SAUSCardSection
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
+ (id)titleCardSection;
+ (id)titleCardSectionWithDictionary:context:;
@end
