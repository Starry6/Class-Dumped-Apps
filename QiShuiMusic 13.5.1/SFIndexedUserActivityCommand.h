@interface SFIndexedUserActivityCommand : SFCommand
@property (nonatomic) NSString userActivityRequiredString;
@property (nonatomic) NSString applicationBundleIdentifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSString commandDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)_cpCommandType;
- (id)userActivityRequiredString;
- (id)applicationBundleIdentifier;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void)setApplicationBundleIdentifier:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (void)setUserActivityRequiredString:;
+ (BOOL)supportsSecureCoding;
@end
