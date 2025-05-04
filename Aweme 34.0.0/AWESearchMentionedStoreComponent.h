@interface AWESearchMentionedStoreComponent : AWESearchComponent
@property (nonatomic) UIView contentView;
@property (nonatomic) AWESearchMentionedStoreView mentionedStoreView;
@property (nonatomic) AWEGeneralSearchVideoCardModel bindedModel;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithModel:forceUpdate:;
- (void)componentViewLayoutSubviews;
- (void)setBindedModel:;
- (id)bindedModel;
- (void)setModelOnly:;
- (void)setCurrentModelFromSetupModelOnly:;
- (BOOL)currentModelFromSetupModelOnly;
- (id)p_context;
- (id)mentionedStoreView;
- (void)setMentionedStoreView:;
- (void)p_updateWithModel:forceUpdate:;
- (id)init;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)componentView;
- (void)setupUI;
- (id)router;
+ (id)componentSizeForModel:width:;
@end
