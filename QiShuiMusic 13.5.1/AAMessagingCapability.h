@interface AAMessagingCapability : NSObject
@property (nonatomic) q capability;
@property (nonatomic) NSString capabilityString;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)capability;
- (id)initWithCapabilityType:;
- (id)capabilityString;
+ (BOOL)supportsSecureCoding;
@end
