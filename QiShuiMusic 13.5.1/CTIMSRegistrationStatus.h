@interface CTIMSRegistrationStatus : NSObject
@property (nonatomic) BOOL isRegisteredForVoice;
@property (nonatomic) BOOL isRegisteredForSMS;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (BOOL)isRegisteredForVoice;
- (void)setIsRegisteredForVoice:;
- (BOOL)isRegisteredForSMS;
- (void)setIsRegisteredForSMS:;
+ (BOOL)supportsSecureCoding;
@end
