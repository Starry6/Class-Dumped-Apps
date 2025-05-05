@interface AIDAServiceOperationResult : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSError error;
@property (nonatomic) NSString type;
- (id)error;
- (id)initWithCoder:;
- (BOOL)success;
- (void)encodeWithCoder:;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithSuccess:error:type:;
+ (BOOL)supportsSecureCoding;
@end
