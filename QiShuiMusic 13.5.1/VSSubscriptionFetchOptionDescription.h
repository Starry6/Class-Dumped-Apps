@interface VSSubscriptionFetchOptionDescription : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) @ defaultValue;
@property (nonatomic) BOOL container;
@property (nonatomic) Q minCount;
@property (nonatomic) # allowedClass;
@property (nonatomic) NSPredicate allowedValuePredicate;
- (void)setMinCount:;
- (void)setContainer:;
- (unsigned long long)minCount;
- (BOOL)isContainer;
- (id)init;
- (void)setAllowedValuePredicate:;
- (void)setDefaultValue:;
- (id)key;
- (id)defaultValue;
- (void)setKey:;
- (void)setAllowedClass:;
- (id)allowedValuePredicate;
- (Class)allowedClass;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
