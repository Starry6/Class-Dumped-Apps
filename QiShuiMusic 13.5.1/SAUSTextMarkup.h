@interface SAUSTextMarkup : AceObject
@property (nonatomic) BOOL emphasized;
@property (nonatomic) NSString text;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setText:;
- (void)setEmphasized:;
- (id)encodedClassName;
- (BOOL)emphasized;
- (id)text;
+ (id)textMarkup;
+ (id)textMarkupWithDictionary:context:;
@end
