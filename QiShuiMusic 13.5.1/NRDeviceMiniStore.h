@interface NRDeviceMiniStore : NSObject
- (id)initWithStore:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)fullStore;
+ (BOOL)supportsSecureCoding;
@end
