@interface CTCellularPlanManagerCameraScanAction : NSObject
@property (nonatomic) NSString smdpAddress;
@property (nonatomic) NSString matchingId;
@property (nonatomic) NSString OID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
- (id)OID;
- (void)setMessage:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void)setOID:;
- (id)message;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)smdpAddress;
- (void)setSmdpAddress:;
- (void)performWithCompletionHandler:;
- (id)matchingId;
- (void)setMatchingId:;
+ (BOOL)supportsSecureCoding;
@end
