@interface ASDIAPInfoResponse : ASDRequestResponse
@property (nonatomic) NSDictionary iaps;
- (id)init;
- (id)initWithCoder:;
- (id)initWithIAPs:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)iaps;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
