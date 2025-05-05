@interface CTServiceDisconnectionStatus : NSObject
@property (nonatomic) NSInteger contextType;
@property (nonatomic) NSString apnName;
@property (nonatomic) BOOL activationFailure;
@property (nonatomic) NSNumber connectionMask;
@property (nonatomic) NSInteger error;
@property (nonatomic) NSNumber rawCauseCode;
@property (nonatomic) NSNumber pdp;
- (int)contextType;
- (void)setError:;
- (void)setContextType:;
- (int)error;
- (id)initWithCoder:;
- (void)setPdp:;
- (BOOL)activationFailure;
- (void)encodeWithCoder:;
- (void)setActivationFailure:;
- (id)pdp;
- (void).cxx_destruct;
- (id)description;
- (id)apnName;
- (id)copyWithZone:;
- (void)setApnName:;
- (id)connectionMask;
- (void)setConnectionMask:;
- (id)rawCauseCode;
- (void)setRawCauseCode:;
+ (BOOL)supportsSecureCoding;
@end
