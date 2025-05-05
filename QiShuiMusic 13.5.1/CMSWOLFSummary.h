@interface CMSWOLFSummary : NSObject
@property (nonatomic) NSData startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSUUID sessionId;
@property (nonatomic) NSUUID sourceId;
@property (nonatomic) double SWOLF;
@property (nonatomic) double freestyleSWOLF;
@property (nonatomic) double backstrokeSWOLF;
@property (nonatomic) double breaststrokeSWOLF;
@property (nonatomic) double butterflySWOLF;
- (id)sessionId;
- (id)startDate;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)endDate;
- (id)description;
- (id)sourceId;
- (id)copyWithZone:;
- (id)initWithCLSWOLFSummary:;
- (id)initWithSessionId:sourceId:startDate:endDate:SWOLF:freestyleSWOLF:backstrokeSWOLF:breaststrokeSWOLF:butterflySWOLF:;
- (double)SWOLF;
- (double)freestyleSWOLF;
- (double)backstrokeSWOLF;
- (double)breaststrokeSWOLF;
- (double)butterflySWOLF;
+ (BOOL)supportsSecureCoding;
@end
