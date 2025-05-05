@interface SFCalendarColor : SFColor
@property (nonatomic) NSString eventIdentifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) double redComponent;
@property (nonatomic) double greenComponent;
@property (nonatomic) double blueComponent;
@property (nonatomic) double alphaComponent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEventIdentifier:;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (id)eventIdentifier;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
