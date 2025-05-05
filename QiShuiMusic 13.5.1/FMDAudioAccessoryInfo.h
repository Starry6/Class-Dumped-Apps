@interface FMDAudioAccessoryInfo : NSObject
@property (nonatomic) NSString systemSerialNumber;
@property (nonatomic) NSString leftSerialNumber;
@property (nonatomic) NSString rightSerialNumber;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSystemSerialNumber:leftSerialNumber:rightSerialNumber:;
- (id)systemSerialNumber;
- (void)setSystemSerialNumber:;
- (id)leftSerialNumber;
- (void)setLeftSerialNumber:;
- (id)rightSerialNumber;
- (void)setRightSerialNumber:;
+ (BOOL)supportsSecureCoding;
@end
