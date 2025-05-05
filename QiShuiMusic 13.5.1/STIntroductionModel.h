@interface STIntroductionModel : NSObject
@property (nonatomic) NSDateComponents downtimeStartTime;
@property (nonatomic) NSDateComponents downtimeEndTime;
@property (nonatomic) NSDictionary restrictions;
@property (nonatomic) NSString passcode;
- (id)passcode;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setPasscode:;
- (id)restrictions;
- (void)setRestrictions:;
- (id)initWithDowntimeStartTime:downtimeEndTime:restrictions:passcode:;
- (id)downtimeStartTime;
- (void)setDowntimeStartTime:;
- (id)downtimeEndTime;
- (void)setDowntimeEndTime:;
+ (BOOL)supportsSecureCoding;
@end
