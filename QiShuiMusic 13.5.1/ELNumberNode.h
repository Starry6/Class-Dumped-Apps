@interface ELNumberNode : ELBaseNode
@property (nonatomic) Q numberType;
- (id)calcuateWtihJSON:;
- (id)initNodeWithValue:;
- (BOOL)isNumberNode;
- (double)doubleValue;
- (long long)integerValue;
- (unsigned long long)numberType;
- (void)setNumberType:;
@end
