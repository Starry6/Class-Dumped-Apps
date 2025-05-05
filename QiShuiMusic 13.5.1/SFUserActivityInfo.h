@interface SFUserActivityInfo : NSObject
@property (nonatomic) NSInteger valueType;
@property (nonatomic) NSString key;
@property (nonatomic) NSString stringValue;
@property (nonatomic) NSURL urlValue;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setValueType:;
- (id)initWithProtobuf:;
- (id)key;
- (id)initWithCoder:;
- (id)jsonData;
- (void)setStringValue:;
- (void)setKey:;
- (void)encodeWithCoder:;
- (id)stringValue;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (int)valueType;
- (BOOL)hasValueType;
- (id)copyWithZone:;
- (id)urlValue;
- (void)setUrlValue:;
+ (BOOL)supportsSecureCoding;
@end
