@interface AWEPadChildChannelInfo : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString contentUrlPath;
@property (nonatomic) NSString skyLightUrlPath;
@property (nonatomic) NSString totalUrlPath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)totalUrlPath;
- (id)contentUrlPath;
- (id)skyLightUrlPath;
- (void)setContentUrlPath:;
- (void)setSkyLightUrlPath:;
- (void)setTotalUrlPath:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
