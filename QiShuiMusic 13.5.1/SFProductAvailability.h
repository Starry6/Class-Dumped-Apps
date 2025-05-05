@interface SFProductAvailability : NSObject
@property (nonatomic) NSArray results;
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
- (id)results;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setResults:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
