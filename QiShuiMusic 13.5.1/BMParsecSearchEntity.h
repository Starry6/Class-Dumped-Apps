@interface BMParsecSearchEntity : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) I category;
@property (nonatomic) float probabilityScore;
@property (nonatomic) NSArray topics;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)proto;
- (id)topics;
- (id)json;
- (id)encodeAsProto;
- (id)initWithCoder:;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (BOOL)isCompleteWithContext:error:;
- (void)encodeWithCoder:;
- (id)initWithProto:;
- (void).cxx_destruct;
- (BOOL)isValidWithContext:error:;
- (id)name;
- (id)serialize;
- (id)jsonDict;
- (BOOL)isEqual:;
- (unsigned int)category;
- (float)probabilityScore;
- (id)initWithName:category:probabilityScore:topics:;
+ (id)eventWithData:dataVersion:;
+ (BOOL)supportsSecureCoding;
@end
