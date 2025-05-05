@interface SFButtonItem : NSObject
@property (nonatomic) Q uniqueId;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)uniqueId;
- (id)initWithProtobuf:;
- (BOOL)hasUniqueId;
- (void)setUniqueId:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
