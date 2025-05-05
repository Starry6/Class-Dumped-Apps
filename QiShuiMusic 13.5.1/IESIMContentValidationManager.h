@interface IESIMContentValidationManager : NSObject
@property (nonatomic) @? contentValidationBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contentValidationBlock;
- (void)setContentValidationBlock:;
- (void)setupWithContentValidationBlock:;
- (void).cxx_destruct;
+ (void)p_hook;
+ (void)p_swizzleInstanceMethod:with:fromClass:;
@end
