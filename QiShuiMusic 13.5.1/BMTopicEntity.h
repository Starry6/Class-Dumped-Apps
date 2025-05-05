@interface BMTopicEntity : NSObject
@property (nonatomic) NSString topicId;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSDictionary attributes;
- (id)initWithProtoData:;
- (id)proto;
- (id)encodeAsProto;
- (id)displayName;
- (id)attributes;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)topicId;
- (BOOL)isEqual:;
- (id)initWithTopicId:displayName:attributes:;
@end
