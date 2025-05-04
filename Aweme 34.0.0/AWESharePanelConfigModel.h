@interface AWESharePanelConfigModel : MTLModel
@property (nonatomic) NSArray videoChannels;
@property (nonatomic) NSArray videoActions;
@property (nonatomic) NSArray moreChannelList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoActions;
- (id)moreChannelList;
- (void)setVideoChannels:;
- (void)setVideoActions:;
- (void)setMoreChannelList:;
- (void).cxx_destruct;
- (id)videoChannels;
+ (id)videoChannelsJSONTransformer;
+ (id)videoActionsJSONTransformer;
+ (id)moreChannelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
