@interface BMParsecSearchTopic : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) float score;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)proto;
- (float)score;
- (id)json;
- (id)identifier;
- (id)encodeAsProto;
- (id)initWithCoder:;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (BOOL)isCompleteWithContext:error:;
- (void)encodeWithCoder:;
- (id)initWithProto:;
- (void).cxx_destruct;
- (BOOL)isValidWithContext:error:;
- (id)serialize;
- (id)jsonDict;
- (BOOL)isEqual:;
- (id)initWithIdentifier:score:;
+ (id)eventWithData:dataVersion:;
+ (BOOL)supportsSecureCoding;
@end
