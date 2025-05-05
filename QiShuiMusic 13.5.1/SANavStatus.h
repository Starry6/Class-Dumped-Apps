@interface SANavStatus : AceObject
@property (nonatomic) NSString statusValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)statusValue;
- (void)setStatusValue:;
+ (id)navStatus;
+ (id)navStatusWithDictionary:context:;
@end
