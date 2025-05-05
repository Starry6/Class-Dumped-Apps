@interface SAUITemplateFont : AceObject
@property (nonatomic) NSNumber size;
@property (nonatomic) NSString textStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)textStyle;
- (void)setTextStyle:;
- (id)encodedClassName;
- (void)setSize:;
- (id)size;
+ (id)font;
+ (id)fontWithDictionary:context:;
@end
