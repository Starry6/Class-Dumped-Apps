@interface SFPatternModel : NSObject
@property (nonatomic) NSString pattern_id;
@property (nonatomic) NSData pattern_parameters;
@property (nonatomic) NSString pattern_bundle_id;
@property (nonatomic) NSString pattern_template_directory;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)pattern_template_directory;
- (id)pattern_id;
- (id)pattern_parameters;
- (void)setPattern_id:;
- (void)setPattern_parameters:;
- (id)pattern_bundle_id;
- (void)setPattern_bundle_id:;
- (void)setPattern_template_directory:;
+ (BOOL)supportsSecureCoding;
@end
