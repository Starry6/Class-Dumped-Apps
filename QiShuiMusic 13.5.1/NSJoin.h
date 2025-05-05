@interface NSJoin : NSObject
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSourceAttributeName:destinationAttributeName:;
@end
