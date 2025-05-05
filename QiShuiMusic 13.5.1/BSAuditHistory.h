@interface BSAuditHistory : NSObject
@property (nonatomic) BOOL hasItems;
@property (nonatomic) NSArray items;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addItem:;
- (id)init;
- (void)encodeWithXPCDictionary:;
- (BOOL)hasItems;
- (id)items;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)addItemWithFormat:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
+ (BOOL)supportsSecureCoding;
@end
