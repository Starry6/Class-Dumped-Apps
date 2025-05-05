@interface ISSymbolImageDescriptor : IFSymbolImageDescriptor
@property (nonatomic) Q size;
@property (nonatomic) q weight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)weight;
- (void)setWeight:;
- (void)setSize:;
- (unsigned long long)size;
@end
