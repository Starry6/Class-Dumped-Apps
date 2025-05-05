@interface SANodeIntent : AceObject
@property (nonatomic) NSArray matchingSpans;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray privacyPolicy;
@property (nonatomic) <SAAceSerializable> value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setName:;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
- (id)name;
- (id)privacyPolicy;
- (id)matchingSpans;
- (void)setMatchingSpans:;
- (void)setPrivacyPolicy:;
+ (id)nodeIntent;
+ (id)nodeIntentWithDictionary:context:;
@end
