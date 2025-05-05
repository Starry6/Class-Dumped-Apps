@interface IESLiveVSAlbumSelectionButtonView : UIView
@property (nonatomic) UIButton selectionButton;
@property (nonatomic) UIView selectionContentView;
@property (nonatomic) HTSLiveToolbarItem vsAlbumItem;
@property (nonatomic) UILabel vsAlbumLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVsAlbumItem:;
- (void)addOpenAlbumTarget:action:;
- (id)pluginLayoutContentInsets;
- (id)pluginLayoutContentSize;
- (id)selectionContentView;
- (void)setSelectionContentView:;
- (void)setVsAlbumLabel:;
- (void)setupLandscapeWithItem:;
- (void)setupPortraitButton;
- (id)vsAlbumItem;
- (id)vsAlbumLabel;
- (id)viewType;
- (void).cxx_destruct;
- (id)initWithItem:;
- (id)selectionButton;
- (void)setSelectionButton:;
@end
