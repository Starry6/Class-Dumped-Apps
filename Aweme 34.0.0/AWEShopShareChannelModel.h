@interface AWEShopShareChannelModel : MTLModel
@property (nonatomic) AWEURLModel channelIcon;
@property (nonatomic) NSString channelText;
@property (nonatomic) NSString channelSchema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setChannelSchema:;
- (id)channelSchema;
- (id)channelText;
- (id)channelIcon;
- (void)setChannelIcon:;
- (void)setChannelText:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
