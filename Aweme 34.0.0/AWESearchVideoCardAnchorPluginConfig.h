@interface AWESearchVideoCardAnchorPluginConfig : NSObject
@property (nonatomic) NSString anchorCardName;
@property (nonatomic) Q anchorComponentType;
- (id)anchorCardName;
- (void)setAnchorCardName:;
- (unsigned long long)anchorComponentType;
- (id)initWithAnchorCardName:anchorComponentType:;
- (id)anchorPluginCls;
- (id)anchorPluginMap;
- (void)setAnchorComponentType:;
- (void).cxx_destruct;
+ (id)weakAnchorPluginMap;
+ (id)strongAnchorPluginMap;
@end
