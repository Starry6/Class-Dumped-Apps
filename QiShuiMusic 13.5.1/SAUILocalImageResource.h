@interface SAUILocalImageResource : AceObject
@property (nonatomic) NSString imageCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)imageCode;
- (void)setImageCode:;
+ (id)localImageResource;
+ (id)localImageResourceWithDictionary:context:;
@end
