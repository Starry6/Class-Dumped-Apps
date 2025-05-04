@interface AWEIMCellPresenterBase : MTLModel
@property (nonatomic) UIView view;
@property (nonatomic) AWEIMChatCellComponentBase currentBelongingComponent;
@property (nonatomic) BOOL displayEnable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)displayEnable;
- (void)setDisplayEnable:;
- (void)updateView:;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (void)setCurrentBelongingComponent:;
- (id)currentBelongingComponent;
- (id)view;
- (void)setView:;
- (void).cxx_destruct;
@end
