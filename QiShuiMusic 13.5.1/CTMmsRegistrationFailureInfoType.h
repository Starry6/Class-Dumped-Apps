@interface CTMmsRegistrationFailureInfoType : NSObject
@property (nonatomic) NSNumber pdpContextId;
@property (nonatomic) BOOL dataActive;
@property (nonatomic) BOOL isDataAttached;
@property (nonatomic) BOOL activationForMms;
- (id)init;
- (BOOL)dataActive;
- (void)setDataActive:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToCTMmsRegistrationFailureInfoType:;
- (id)pdpContextId;
- (void)setPdpContextId:;
- (BOOL)isDataAttached;
- (void)setIsDataAttached:;
- (BOOL)activationForMms;
- (void)setActivationForMms:;
+ (BOOL)supportsSecureCoding;
@end
