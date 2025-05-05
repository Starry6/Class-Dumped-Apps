@interface GHNSObjectProperty : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q type;
@property (nonatomic) BOOL dynamic;
@property (nonatomic) # cls;
@property (nonatomic) : setter;
@property (nonatomic) : getter;
@property (nonatomic) ^? setterImpl;
@property (nonatomic) ^? getterImpl;
- (void)_setupType:;
- (id)getterImpl;
- (id)initWithProperty:class:;
- (void)setGetterImpl:;
- (void)setSetterImpl:;
- (id)setterImpl;
- (Class)cls;
- (void)setName:;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)name;
- (BOOL)dynamic;
- (void)setDynamic:;
- (SEL)setter;
- (void)setSetter:;
- (SEL)getter;
- (void)setGetter:;
- (void)setCls:;
@end
