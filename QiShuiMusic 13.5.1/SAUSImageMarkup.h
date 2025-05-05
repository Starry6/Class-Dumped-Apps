@interface SAUSImageMarkup : AceObject
@property (nonatomic) SAUIImageResource imageResource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)imageResource;
- (void)setImageResource:;
+ (id)imageMarkup;
+ (id)imageMarkupWithDictionary:context:;
@end
