@interface AWEFeedDetectSoundLeakController : AWEBaseController
@property (nonatomic) NSDictionary channelInfoMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configureCell:withModel:atIndexPath:;
- (void)willEnterUserProfileViewController;
- (void)tableView:didDisplayCell:forRowAtIndexPath:;
- (id)shouldPreventPlayBeforePlayStateChanged;
- (BOOL)enableChannelMatchDetect;
- (BOOL)isCurrentChannelMatch:;
- (void)trackChannelMismatchWithCurrentChannel:;
- (id)channelInfoMap;
- (void)setChannelInfoMap:;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)pause;
@end
