@interface SAUITemplateEdgeInsets : AceObject
@property (nonatomic) float bottom;
@property (nonatomic) float left;
@property (nonatomic) float right;
@property (nonatomic) float top;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (float)top;
- (void)setTop:;
- (float)left;
- (id)encodedClassName;
- (float)bottom;
- (float)right;
- (void)setBottom:;
- (void)setLeft:;
- (void)setRight:;
+ (id)edgeInsets;
+ (id)edgeInsetsWithDictionary:context:;
@end
