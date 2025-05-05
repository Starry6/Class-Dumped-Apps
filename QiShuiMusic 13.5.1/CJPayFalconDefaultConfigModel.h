@interface CJPayFalconDefaultConfigModel : JSONModel
@property (nonatomic) BOOL enableDefaultConfig;
@property (nonatomic) NSArray prefixList;
@property (nonatomic) NSArray channelList;
- (void)setChannelList:;
- (id)channelList;
- (BOOL)enableDefaultConfig;
- (id)prefixList;
- (void)setEnableDefaultConfig:;
- (void)setPrefixList:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
