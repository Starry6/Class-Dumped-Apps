@interface AWEHPMessage : MTLModel
@property (nonatomic) q cmd;
@property (nonatomic) NSString res;
@property (nonatomic) q act;
@property (nonatomic) NSDictionary data;
@property (nonatomic) q version;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)cmd;
- (void)setCmd:;
- (long long)act;
- (void)setAct:;
- (long long)version;
- (void)setVersion:;
- (id)description;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)res;
- (void)setRes:;
+ (id)cacheDictionaryFromMessage:;
+ (id)messageFromCacheDictionary:;
+ (id)JSONKeyPathsByPropertyKey;
@end
