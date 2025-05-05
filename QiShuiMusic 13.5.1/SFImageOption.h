@interface SFImageOption : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString defaultValue;
@property (nonatomic) NSDictionary options;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOptions:;
- (void)setName:;
- (id)initWithProtobuf:;
- (void)setDefaultValue:;
- (id)defaultValue;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (id)options;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
