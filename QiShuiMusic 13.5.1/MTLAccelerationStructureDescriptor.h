@interface MTLAccelerationStructureDescriptor : NSObject
@property (nonatomic) Q usage;
- (unsigned long long)usage;
- (unsigned long long)hash;
- (void)setUsage:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
