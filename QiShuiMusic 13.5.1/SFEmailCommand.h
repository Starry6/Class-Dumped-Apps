@interface SFEmailCommand : SFCommand
@property (nonatomic) NSString email;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSString commandDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)_cpCommandType;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)setEmail:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)email;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
