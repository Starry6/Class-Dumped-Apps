@interface MRRapportTransportConfiguration : NSObject
@property (nonatomic) NSString deviceUID;
@property (nonatomic) NSString sessionUID;
@property (nonatomic) NSString name;
- (void)setDeviceUID:;
- (id)deviceUID;
- (void)setName:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setSessionUID:;
- (id)sessionUID;
+ (BOOL)supportsSecureCoding;
@end
