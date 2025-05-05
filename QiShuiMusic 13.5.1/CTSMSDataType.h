@interface CTSMSDataType : NSObject
@property (nonatomic) NSNumber transport;
@property (nonatomic) NSNumber ctFormat;
@property (nonatomic) BOOL parseSMSC;
@property (nonatomic) BOOL waitForAck;
@property (nonatomic) NSData hexPdu;
- (id)transport;
- (void)setTransport:;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToCTSMSDataType:;
- (id)ctFormat;
- (void)setCtFormat:;
- (BOOL)parseSMSC;
- (void)setParseSMSC:;
- (BOOL)waitForAck;
- (void)setWaitForAck:;
- (id)hexPdu;
- (void)setHexPdu:;
+ (BOOL)supportsSecureCoding;
@end
