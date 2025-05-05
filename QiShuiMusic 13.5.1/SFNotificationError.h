@interface SFNotificationError : NSObject
@property (nonatomic) NSString errorDescription;
- (id)errorDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setErrorDescription:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
