@interface AWEPlayInteractionTemplateButtonGroup : UIView
@property (nonatomic) NSArray configGroup;
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) UIStackView groupView;
@property (nonatomic) <AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutSubviews;
- (void)setupBinding;
- (id)buttonArray;
- (void)setupGroup;
- (id)configGroup;
- (void)playFlashAnimationIfNeeded;
- (id)initWithConfigGroup:context:;
- (void)setConfigGroup:;
- (id)delegate;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
- (id)groupView;
- (void)setGroupView:;
@end
