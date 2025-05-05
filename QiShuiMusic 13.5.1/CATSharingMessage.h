@interface CATSharingMessage : NSObject
@property (nonatomic) q messageType;
@property (nonatomic) NSDictionary contentDictionaryValue;
@property (nonatomic) NSDictionary dictionaryValue;
- (long long)messageType;
- (id)dictionaryValue;
- (void).cxx_destruct;
- (id)initWithContentMessage:;
- (id)initWithMessageType:contentDictionary:;
- (id)contentDictionaryValue;
+ (id)instanceWithDictionary:;
@end
