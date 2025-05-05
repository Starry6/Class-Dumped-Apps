@interface SAUITemplateSegmentedControl : SAUITemplateBaseItem
@property (nonatomic) NSDictionary backgroundColors;
@property (nonatomic) NSDictionary textColors;
@property (nonatomic) NSArray titles;
- (id)groupIdentifier;
- (id)backgroundColors;
- (id)encodedClassName;
- (id)titles;
- (void)setTitles:;
- (void)setBackgroundColors:;
- (id)textColors;
- (void)setTextColors:;
+ (id)segmentedControl;
+ (id)segmentedControlWithDictionary:context:;
@end
