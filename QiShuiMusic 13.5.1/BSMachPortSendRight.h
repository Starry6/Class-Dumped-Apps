@interface BSMachPortSendRight : BSMachPortRight
- (id)initWithSendRight:;
- (id)initWithPort:;
- (id)initWithNonRetainingPort:;
- (id)initWithSendRight:assumeOwnership:;
- (unsigned int)sendRight;
- (id)initWithCopyOfRight:;
- (id)initWithCopyOfPort:;
- (id)initFromReceiveRight:;
- (id)copyWithZone:;
+ (char)_type;
+ (id)bootstrapLookUpWithName:;
+ (id)bootstrapLookUpPortWithName:;
+ (id)wrapSendRight:;
+ (id)taskNamePortForPID:;
@end
