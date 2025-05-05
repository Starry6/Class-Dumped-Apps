@interface BSObjCMethod : NSObject
@property (nonatomic) NSString encoding;
@property (nonatomic) : selector;
@property (nonatomic) NSString name;
@property (nonatomic) BSObjCArgument returnValue;
@property (nonatomic) NSArray arguments;
@property (nonatomic) BSObjCArgument firstArgument;
@property (nonatomic) BSObjCArgument lastArgument;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (SEL)selector;
- (id)returnValue;
- (id)firstArgument;
- (id)arguments;
- (id)encoding;
- (id)succinctDescriptionBuilder;
- (unsigned long long)hash;
- (id)lastArgument;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)copyAsOnewayVoid;
- (id)name;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
@end
