@interface SAUITemplateKeyline : SAUITemplateBaseItem
@property (nonatomic) NSNumber width;
- (id)groupIdentifier;
- (void)setWidth:;
- (id)width;
- (id)encodedClassName;
+ (id)keyline;
+ (id)keylineWithDictionary:context:;
@end
