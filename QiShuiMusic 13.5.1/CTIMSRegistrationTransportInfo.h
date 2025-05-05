@interface CTIMSRegistrationTransportInfo : NSObject
@property (nonatomic) BOOL isRegistered;
@property (nonatomic) NSInteger contextType;
@property (nonatomic) NSInteger transportType;
- (BOOL)isRegistered;
- (void)setTransportType:;
- (int)contextType;
- (void)setContextType:;
- (int)transportType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (void)setIsRegistered:;
+ (BOOL)supportsSecureCoding;
@end
