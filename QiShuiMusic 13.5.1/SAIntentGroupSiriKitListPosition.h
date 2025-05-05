@interface SAIntentGroupSiriKitListPosition : AceObject
@property (nonatomic) q offset;
@property (nonatomic) NSString position;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPosition:;
- (id)position;
- (void)setOffset:;
- (id)groupIdentifier;
- (long long)offset;
- (id)encodedClassName;
+ (id)siriKitListPosition;
+ (id)siriKitListPositionWithDictionary:context:;
@end
