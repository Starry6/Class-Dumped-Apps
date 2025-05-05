@interface BMEntity : NSObject
@property (nonatomic) BOOL isPersonType;
@property (nonatomic) BOOL isTopicType;
@property (nonatomic) BMTopicEntity topicEntity;
@property (nonatomic) BMPersonEntity personEntity;
- (id)initWithProtoData:;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithProto:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)personEntity;
- (id)topicEntity;
- (id)initWithTopicEntity:;
- (id)initWithPersonEntity:;
- (id)initWithIsPersonType:isTopicType:topicEntity:personEntity:;
- (BOOL)isPersonType;
- (BOOL)isTopicType;
@end
