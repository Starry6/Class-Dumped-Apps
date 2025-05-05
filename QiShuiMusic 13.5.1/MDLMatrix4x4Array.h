@interface MDLMatrix4x4Array : NSObject
@property (nonatomic) Q elementCount;
@property (nonatomic) Q precision;
- (unsigned long long)precision;
- (void)clear;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:;
- (unsigned long long)elementCount;
- (unsigned long long)getFloat4x4Array:maxCount:;
- (id)defaultVtValue;
- (void)resetWithUsdAttribute:;
- (void)resetWithUsdAttribute:time:;
- (id)initWithElementCount:;
- (void)setFloat4x4Array:count:;
- (void)setDouble4x4Array:count:;
- (unsigned long long)getDouble4x4Array:maxCount:;
@end
