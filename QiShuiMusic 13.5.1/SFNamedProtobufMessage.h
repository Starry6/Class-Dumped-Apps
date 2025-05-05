@interface SFNamedProtobufMessage : NSObject
@property (nonatomic) NSData protobufMessageData;
@property (nonatomic) NSString protobufMessageName;
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
- (id)protobufMessageData;
- (void)setProtobufMessageData:;
- (id)protobufMessageName;
- (void)setProtobufMessageName:;
+ (BOOL)supportsSecureCoding;
@end
