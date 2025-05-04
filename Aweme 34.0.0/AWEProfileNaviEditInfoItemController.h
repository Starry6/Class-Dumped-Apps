@interface AWEProfileNaviEditInfoItemController : NSObject
@property (nonatomic) AWEProfileNavigationButton editInfoButton;
@property (nonatomic) <AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (id)profileContext;
- (void)onReloadUI:isCache:;
- (id)navigationItemView;
- (id)getButtonText;
- (id)commonComponent;
- (id)editInfoButton;
- (void)editInfoButtonClicked:;
- (void)setEditInfoButton:;
- (id)delegate;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)itemSize;
@end
