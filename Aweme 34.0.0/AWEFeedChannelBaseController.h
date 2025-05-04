@interface AWEFeedChannelBaseController : NSObject
@property (nonatomic) <AWEHPChannelTopBarAbility> topBarAbility;
@property (nonatomic) <AWEHPChannelPageAbility> pageAbility;
@property (nonatomic) <AWEHPChannelBubbleAbility> bubbleAbility;
@property (nonatomic) <AWEHPChannelTabItemAbility> tabItemAbility;
@property (nonatomic) <AWEHPChannelEditAbility> editAbility;
@property (nonatomic) <AWEHPChannelControllerConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)topBarAbility;
- (id)pageAbility;
- (id)editAbility;
- (id)getContentViewController;
- (void)setTopBarAbility:;
- (id)tabItemAbility;
- (id)bubbleAbility;
- (void)setPageAbility:;
- (void)setBubbleAbility:;
- (void)setTabItemAbility:;
- (void)setEditAbility:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
@end
