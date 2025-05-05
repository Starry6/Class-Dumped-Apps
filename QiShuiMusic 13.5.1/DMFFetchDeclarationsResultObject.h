@interface DMFFetchDeclarationsResultObject : CATTaskResultObject
@property (nonatomic) NSArray payloadDescriptions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)payloadDescriptions;
- (void)setPayloadDescriptions:;
+ (BOOL)supportsSecureCoding;
@end
