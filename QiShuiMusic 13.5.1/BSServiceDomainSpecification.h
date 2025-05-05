@interface BSServiceDomainSpecification : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString machName;
@property (nonatomic) NSSet services;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)identifier;
- (id)machName;
- (id)succinctDescriptionBuilder;
- (id)serviceForIdentifier:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)services;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
@end
