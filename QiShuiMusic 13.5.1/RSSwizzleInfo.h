@interface RSSwizzleInfo : NSObject
@property (nonatomic) @? impProviderBlock;
@property (nonatomic) : selector;
- (id)getOriginalImplementation;
- (id)impProviderBlock;
- (void)setImpProviderBlock:;
- (SEL)selector;
- (void)setSelector:;
- (void).cxx_destruct;
@end
