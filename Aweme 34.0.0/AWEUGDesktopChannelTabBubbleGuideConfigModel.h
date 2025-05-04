@interface AWEUGDesktopChannelTabBubbleGuideConfigModel : MTLModel
@property (nonatomic) NSString bubbleText;
@property (nonatomic) NSString linkText;
@property (nonatomic) NSString componentId;
@property (nonatomic) AWEUGDesktopChannelGuideInstallConfigModel installConfig;
@property (nonatomic) AWEUGDesktopChannelGuideTrackerInfoModel trackerInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTrackerInfo:;
- (id)installConfig;
- (void)setInstallConfig:;
- (id)trackerInfo;
- (void).cxx_destruct;
- (id)bubbleText;
- (void)setBubbleText:;
- (id)linkText;
- (void)setLinkText:;
- (void)setComponentId:;
- (id)componentId;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
