@interface SAOperation : AceObject
@property (nonatomic) NSDictionary constraints;
@property (nonatomic) NSString domainId;
@property (nonatomic) NSString operationId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)operationId;
- (id)groupIdentifier;
- (id)constraints;
- (void)setConstraints:;
- (id)domainId;
- (id)encodedClassName;
- (void)setOperationId:;
- (void)setDomainId:;
+ (id)operation;
+ (id)operationWithDictionary:context:;
@end
