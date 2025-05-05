@interface SAInputValue : AceObject
@property (nonatomic) NSString inputValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)inputValue;
- (void)setInputValue:;
+ (id)inputValue;
+ (id)inputValueWithDictionary:context:;
@end
