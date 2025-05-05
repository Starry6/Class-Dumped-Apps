@interface SAUSRowCardSection : SAUSCardSection
@property (nonatomic) SAUIImageResource image;
@property (nonatomic) BOOL imageIsRightAligned;
@property (nonatomic) NSString leftText;
@property (nonatomic) NSString rightText;
- (id)groupIdentifier;
- (void)setImage:;
- (id)encodedClassName;
- (id)image;
- (id)leftText;
- (void)setLeftText:;
- (id)rightText;
- (void)setRightText:;
- (void)setImageIsRightAligned:;
- (BOOL)imageIsRightAligned;
+ (id)rowCardSection;
+ (id)rowCardSectionWithDictionary:context:;
@end
