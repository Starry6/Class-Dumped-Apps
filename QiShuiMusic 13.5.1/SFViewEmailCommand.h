@interface SFViewEmailCommand : SFCommand
@property (nonatomic) BOOL placeHolderProperty;
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
- (void)encodeWithCoder:;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (BOOL)placeHolderProperty;
- (void)setPlaceHolderProperty:;
- (BOOL)hasPlaceHolderProperty;
+ (BOOL)supportsSecureCoding;
@end
