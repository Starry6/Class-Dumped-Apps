@interface SAAceConfirmationContext : AceObject
@property (nonatomic) NSString reason;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)reason;
- (void)setReason:;
- (id)encodedClassName;
+ (id)aceConfirmationContext;
+ (id)aceConfirmationContextWithDictionary:context:;
@end
