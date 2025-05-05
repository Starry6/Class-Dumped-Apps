@interface IDSIDKTData : NSObject
@property (nonatomic) NSUUID verificationRequestID;
- (id)initWithRequestID:;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)verificationRequestID;
+ (BOOL)supportsSecureCoding;
@end
