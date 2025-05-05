@interface HMDValidatedMethod : NSObject
@property (nonatomic) NSString validatedMethodName;
@property (nonatomic) NSString classString;
@property (nonatomic) NSString selectorString;
@property (nonatomic) # clazz;
@property (nonatomic) : selector;
@property (nonatomic) BOOL isInstance;
- (Class)clazz;
- (id)initWithClassString:selectorString:clazz:selector:isInstance:;
- (BOOL)isInstance;
- (id)validatedMethodName;
- (SEL)selector;
- (void).cxx_destruct;
- (id)selectorString;
- (id)classString;
@end
