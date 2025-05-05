@interface SASTComparisonItem : AceObject
@property (nonatomic) SASTComparisonEntity firstItem;
@property (nonatomic) SAUIDecoratedText footnote;
@property (nonatomic) SASTComparisonEntity secondItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)firstItem;
- (id)secondItem;
- (void)setFootnote:;
- (id)footnote;
- (void)setFirstItem:;
- (void)setSecondItem:;
+ (id)comparisonItem;
+ (id)comparisonItemWithDictionary:context:;
@end
