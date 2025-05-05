@interface SASTGridCell : AceObject
@property (nonatomic) SAUIDecoratedText subTitle;
@property (nonatomic) SAUIDecoratedText title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (void)setSubTitle:;
- (id)subTitle;
+ (id)gridCell;
+ (id)gridCellWithDictionary:context:;
@end
