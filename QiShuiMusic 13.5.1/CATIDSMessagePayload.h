@interface CATIDSMessagePayload : NSObject
@property (nonatomic) CATIDSMessageMetadata metadata;
@property (nonatomic) <CATIDSMessage> message;
@property (nonatomic) NSDictionary dictionaryValue;
- (id)metadata;
- (id)dictionaryValue;
- (id)initWithMessage:;
- (id)message;
- (void).cxx_destruct;
- (id)messageContent;
- (id)initWithMetadata:message:;
+ (id)instanceWithDictionary:;
@end
