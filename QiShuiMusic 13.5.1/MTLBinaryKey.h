@interface MTLBinaryKey : NSObject
@property (nonatomic) r^{?=[32C]} value;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithHash:;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
- (BOOL)isEqualToKey:;
- (id)copyWithZone:;
- (id)getFunctionId;
@end
