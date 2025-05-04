@interface AWEIMSkylightCellViewModel : NSObject
@property (nonatomic) AWEIMSkylightCellComponentContext componentContext;
@property (nonatomic) AWEIMOnlineContactAvatarViewModel model;
@property (nonatomic) AWEIMSkylightCellRender skylightRender;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMComponentManager componentManager;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)setComponentContext:;
- (void)updateCellLayoutAndReloadPresenter:;
- (id)skylightRender;
- (void)setSkylightRender:;
- (void)renderInCell:;
- (void)componentCellPrepareForReuse;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (void)buildComponents;
- (void)updateWithModel:;
- (id)componentManager;
@end
