@interface SFKeyValueTuple : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString value;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)key;
- (id)initWithCoder:;
- (id)jsonData;
- (void)setKey:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
