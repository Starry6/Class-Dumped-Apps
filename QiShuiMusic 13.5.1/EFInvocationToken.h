@interface EFInvocationToken : NSObject
@property (nonatomic) BOOL invoked;
@property (nonatomic) NSString label;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithLabel:;
- (void)addInvocationBlock:;
- (id)init;
- (void)invoke;
- (id)label;
- (void)removeAllInvocationBlocks;
- (id)initWithInvocationBlock:;
- (id)_nts_consumeBlocks;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isInvoked;
- (void)addInvocable:;
+ (id)tokenWithLabel:invocationBlock:;
+ (id)_descriptionString;
+ (id)tokenWithInvocationBlock:;
@end
