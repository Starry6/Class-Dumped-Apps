@interface AWEIMSkylightVirtualAvatarSelfCollectionViewCell : AWEIMSkylightAvatarCollectionViewCell
@property (nonatomic) AWEIMActiveUserIndicativeView onlineDotView;
- (void)setOnlineDotView:;
- (id)onlineDotView;
- (void)createComponents;
- (void)updateUserInfo;
- (void)updateVirtualAvatarFromRemoteIfNeededWithModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutComponents;
@end
