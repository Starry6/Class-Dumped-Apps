@interface DMFFetchAvailableOSUpdatesResultObject : CATTaskResultObject
@property (nonatomic) DMFOSUpdate update;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)update;
- (id)description;
- (id)initWithUpdate:;
+ (BOOL)supportsSecureCoding;
@end
