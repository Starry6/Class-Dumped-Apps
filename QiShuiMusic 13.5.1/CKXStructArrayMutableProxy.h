@interface CKXStructArrayMutableProxy : CKXArrayProxyBase
@property (nonatomic) q index;
- (long long)index;
- (void)setIndex:;
- (BOOL)isMutable;
- (void)reset;
- (long long)count;
- (void)appendWithProxyBlock:;
@end
