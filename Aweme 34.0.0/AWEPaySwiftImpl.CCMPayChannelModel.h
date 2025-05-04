@interface AWEPaySwiftImpl.CCMPayChannelModel : MTLModel
@property (nonatomic) NSString logoURL;
@property (nonatomic) NSString channelName;
@property (nonatomic) NSString jumpURL;
- (id)jumpURL;
- (void)setJumpURL:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)channelName;
- (id)initWithCoder:;
- (id)logoURL;
- (void)setLogoURL:;
- (void)setChannelName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
