@interface AWEIMStickOnTopMessageExtraInfoModel : MTLModel
@property (nonatomic) NSString messageId;
@property (nonatomic) NSString serverMessageId;
@property (nonatomic) q sortTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serverMessageId;
- (void)setServerMessageId:;
- (long long)sortTime;
- (void)setSortTime:;
- (id)messageId;
- (void).cxx_destruct;
- (void)setMessageId:;
+ (id)sortTimeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
