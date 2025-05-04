@interface AWEHPTabTrafficListModel : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) NSDictionary blackListDict;
@property (nonatomic) NSDictionary whiteListDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldBlockWithChannelID:;
- (BOOL)shouldAllowWithChannelID:;
- (id)blackListDict;
- (id)whiteListDict;
- (void)setBlackListDict:;
- (void)setWhiteListDict:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
