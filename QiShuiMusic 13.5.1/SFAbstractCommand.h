@interface SFAbstractCommand : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) SFCommandValue value;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (void)setType:;
- (BOOL)hasType;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void)setValue:;
- (int)type;
- (void).cxx_destruct;
- (id)value;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
