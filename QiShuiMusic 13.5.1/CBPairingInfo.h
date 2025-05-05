@interface CBPairingInfo : NSObject
@property (nonatomic) CBDevice device;
@property (nonatomic) NSError error;
@property (nonatomic) I flags;
@property (nonatomic) q pairingType;
@property (nonatomic) NSString pin;
- (void)encodeWithXPCObject:;
- (void)setDevice:;
- (void)setError:;
- (id)initWithXPCObject:error:;
- (id)error;
- (void).cxx_destruct;
- (id)description;
- (void)setFlags:;
- (unsigned int)flags;
- (id)device;
- (long long)pairingType;
- (void)setPairingType:;
- (id)pin;
- (void)setPin:;
@end
