@interface SAUITemplateGroupView : SAUITemplateBaseItemGroup
@property (nonatomic) NSString alignment;
@property (nonatomic) NSString layoutStyle;
- (id)groupIdentifier;
- (void)setAlignment:;
- (id)layoutStyle;
- (void)setLayoutStyle:;
- (id)encodedClassName;
- (id)alignment;
+ (id)groupView;
+ (id)groupViewWithDictionary:context:;
@end
