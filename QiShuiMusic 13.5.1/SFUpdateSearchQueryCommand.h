@interface SFUpdateSearchQueryCommand : SFCommand
@property (nonatomic) NSString searchString;
@property (nonatomic) NSInteger querySource;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSString commandDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)_cpCommandType;
- (void)setSearchString:;
- (id)searchString;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (int)querySource;
- (void)setQuerySource:;
- (BOOL)hasQuerySource;
+ (BOOL)supportsSecureCoding;
@end
