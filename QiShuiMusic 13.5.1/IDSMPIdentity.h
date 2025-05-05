@interface IDSMPIdentity : NSObject
@property (nonatomic) ^v backingValue;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:;
- (id)initWithBackingValue:;
- (id)backingValue;
@end
