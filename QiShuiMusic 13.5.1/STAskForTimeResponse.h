@interface STAskForTimeResponse : NSObject
@property (nonatomic) NSUUID associatedRequestIdentifier;
@property (nonatomic) q answer;
@property (nonatomic) NSNumber respondingUserDSID;
@property (nonatomic) NSNumber amountGranted;
@property (nonatomic) NSDate timeStamp;
@property (nonatomic) NSDictionary payload;
- (id)payload;
- (id)init;
- (id)initWithPayload:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)timeStamp;
- (void)setTimeStamp:;
- (long long)answer;
- (void)setAnswer:;
- (id)amountGranted;
- (void)setAmountGranted:;
- (id)associatedRequestIdentifier;
- (void)setAssociatedRequestIdentifier:;
- (id)respondingUserDSID;
- (void)setRespondingUserDSID:;
+ (BOOL)supportsSecureCoding;
@end
