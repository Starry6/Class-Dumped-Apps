@interface SAUSRichTitleCardSection : SAUSTitleCardSection
@property (nonatomic) BOOL centered;
@property (nonatomic) NSString contentRatingText;
@property (nonatomic) NSString subtitle;
@property (nonatomic) SAUIImageResource titleImage;
- (id)groupIdentifier;
- (void)setSubtitle:;
- (id)encodedClassName;
- (id)subtitle;
- (void)setCentered:;
- (BOOL)centered;
- (void)setTitleImage:;
- (id)titleImage;
- (id)contentRatingText;
- (void)setContentRatingText:;
+ (id)richTitleCardSection;
+ (id)richTitleCardSectionWithDictionary:context:;
@end
