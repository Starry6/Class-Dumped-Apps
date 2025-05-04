@interface AWEHPChannelAvatarBreathModel : AWEHPBaseComponentModel
@property (nonatomic) NSArray avatarURLList;
@property (nonatomic) UIColor tagFromColor;
@property (nonatomic) UIColor tagToColor;
@property (nonatomic) BOOL needLiveTag;
- (void)setAvatarURLList:;
- (BOOL)needLiveTag;
- (id)avatarURLList;
- (id)tagFromColor;
- (id)tagToColor;
- (void)setTagFromColor:;
- (void)setTagToColor:;
- (void)setNeedLiveTag:;
- (void).cxx_destruct;
@end
