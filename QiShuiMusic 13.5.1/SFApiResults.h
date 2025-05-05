@interface SFApiResults : NSObject
@property (nonatomic) NSInteger status;
@property (nonatomic) NSInteger resultType;
@property (nonatomic) NSArray flights;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStatus:;
- (BOOL)hasStatus;
- (id)initWithProtobuf:;
- (void)setResultType:;
- (id)initWithCoder:;
- (id)jsonData;
- (int)resultType;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (int)status;
- (id)dictionaryRepresentation;
- (BOOL)hasResultType;
- (id)copyWithZone:;
- (id)flights;
- (void)setFlights:;
+ (BOOL)supportsSecureCoding;
@end
