@interface BSXPCCodingArray : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)succinctDescriptionBuilder;
- (id)initWithXPCDictionary:;
- (id)initWithArray:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (unsigned long long)count;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
@end
