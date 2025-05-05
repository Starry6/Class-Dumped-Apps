@interface SASTStockComparisonItem : AceObject
@property (nonatomic) NSString stockValueFacet;
@property (nonatomic) SAUIDecoratedText subtitle;
@property (nonatomic) SAUIDecoratedText title;
@property (nonatomic) SAUIDecoratedText value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setSubtitle:;
- (void)setTitle:;
- (void)setValue:;
- (id)title;
- (id)encodedClassName;
- (id)value;
- (id)subtitle;
- (id)stockValueFacet;
- (void)setStockValueFacet:;
+ (id)stockComparisonItem;
+ (id)stockComparisonItemWithDictionary:context:;
@end
