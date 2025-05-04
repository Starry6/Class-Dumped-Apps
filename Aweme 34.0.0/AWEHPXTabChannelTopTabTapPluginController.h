@interface AWEHPXTabChannelTopTabTapPluginController : NSObject
@property (nonatomic) double lastClickTimestamp;
@property (nonatomic) AWEHPXTabChannelManager manager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)lastClickTimestamp;
- (void)setLastClickTimestamp:;
- (BOOL)channelTopTabShouldRepeatedClickTab;
- (BOOL)enableReverseDoubleColumnRecommendEntry;
- (void)setManager:;
- (id)manager;
- (void).cxx_destruct;
@end
