@interface AWEIMPickerOriginSelectComponent : AWEIMComponentBase
@property (nonatomic) UIButton originalButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)albumDidClickEntrance:;
- (void)albumDidSelectAlbumAtIndex:;
- (void)onSelectedOriginStatusDidChanged:;
- (void)originalButtonPressed:;
- (void).cxx_destruct;
- (id)originalButton;
- (void)setOriginalButton:;
- (void)createUI;
- (void)layoutUI;
+ (BOOL)canCreateComponentWithContext:;
@end
