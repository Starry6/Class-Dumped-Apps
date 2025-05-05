@interface SAAceListResult : SABaseAceObject
@property (nonatomic) NSArray result;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)result;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setResult:;
+ (id)aceListResult;
+ (id)aceListResultWithDictionary:context:;
@end
