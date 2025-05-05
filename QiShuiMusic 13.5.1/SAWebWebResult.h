@interface SAWebWebResult : AceObject
@property (nonatomic) NSString descriptionText;
@property (nonatomic) NSString title;
@property (nonatomic) NSURL url;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)url;
- (id)groupIdentifier;
- (id)descriptionText;
- (void)setTitle:;
- (void)setUrl:;
- (id)title;
- (id)encodedClassName;
- (void)setDescriptionText:;
+ (id)webResult;
+ (id)webResultWithDictionary:context:;
@end
