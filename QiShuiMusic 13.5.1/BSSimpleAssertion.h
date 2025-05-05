@interface BSSimpleAssertion : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString reason;
@property (nonatomic) BOOL valid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)identifier;
- (id)initWithIdentifier:forReason:queue:invalidationBlock:;
- (id)reason;
- (id)succinctDescriptionBuilder;
- (BOOL)isValid;
- (id)initWithIdentifier:forReason:invalidationBlock:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (void)invalidate;
- (id)descriptionWithMultilinePrefix:;
@end
