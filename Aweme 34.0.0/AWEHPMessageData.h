@interface AWEHPMessageData : MTLModel
@property (nonatomic) q version;
@property (nonatomic) NSArray messageList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)version;
- (void)setVersion:;
- (void).cxx_destruct;
- (id)messageList;
- (void)setMessageList:;
+ (id)messageListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
