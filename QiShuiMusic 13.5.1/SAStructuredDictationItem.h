@interface SAStructuredDictationItem : AceObject
@property (nonatomic) NSArray resultOptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)resultOptions;
- (void)setResultOptions:;
+ (id)structuredDictationItem;
+ (id)structuredDictationItemWithDictionary:context:;
@end
