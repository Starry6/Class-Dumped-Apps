@interface BMUserActivityMetadataTopic : NSObject
@property (nonatomic) NSString topicIdentifier;
@property (nonatomic) NSString title;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)proto;
- (id)json;
- (id)encodeAsProto;
- (id)initWithCoder:;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (BOOL)isCompleteWithContext:error:;
- (void)encodeWithCoder:;
- (id)initWithProto:;
- (id)title;
- (void).cxx_destruct;
- (BOOL)isValidWithContext:error:;
- (id)serialize;
- (id)jsonDict;
- (BOOL)isEqual:;
- (id)topicIdentifier;
- (id)initWithTopicIdentifier:title:;
+ (id)eventWithData:dataVersion:;
+ (BOOL)supportsSecureCoding;
@end
