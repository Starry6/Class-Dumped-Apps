@interface AWEPOICityLiveComponentViewModel : DitoComponentViewModel
@property (nonatomic) double height;
@property (nonatomic) BOOL firstTimeShow;
@property (nonatomic) BOOL isInLiveTab;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWEPOICityLiveComponentView cell;
@property (nonatomic) NSString statusLabelText;
@property (nonatomic) NSString statusDetailIconImageName;
@property (nonatomic) NSString statusDetailLabelText;
@property (nonatomic) NSArray coverImagURLList;
@property (nonatomic) NSArray userAvatarImageURLList;
@property (nonatomic) NSString userNikenameText;
@property (nonatomic) NSString contentText;
@property (nonatomic) NSString liveStreamData;
@property (nonatomic) NSString liveStreamURL;
@property (nonatomic) BOOL shouldAutoPlay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getAwemeModel;
- (id)aweme;
- (id)liveStreamURL;
- (void)canEnterLiveRoom:;
- (void)enterLiveRoom;
- (id)playerCell;
- (id)zoomTransitionView;
- (id)liveStreamData;
- (id)componentSizeWithMaxWidth:;
- (id)constData;
- (id)generalContext;
- (id)syncFeedManager;
- (double)labelContentHeightWithString:maxWidth:;
- (id)coverImagURLList;
- (id)userNikenameText;
- (id)statusLabelText;
- (id)statusDetailLabelText;
- (id)statusDetailIconImageName;
- (id)userAvatarImageURLList;
- (BOOL)isInLiveTab;
- (BOOL)firstTimeShow;
- (void)setFirstTimeShow:;
- (void)trackFirstShowEvent;
- (void)componentViewWillShow;
- (void)componentViewDidEndShow;
- (id)initWithNode:;
- (void)setHeight:;
- (void).cxx_destruct;
- (double)height;
- (id)cell;
- (void)setCell:;
- (id)contentText;
- (unsigned long long)indexInGroup;
- (BOOL)shouldAutoPlay;
+ (double)coverImageHWRatio;
@end
