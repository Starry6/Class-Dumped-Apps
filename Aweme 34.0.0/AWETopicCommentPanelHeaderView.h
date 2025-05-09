@interface AWETopicCommentPanelHeaderView : AWESearchContainerView
@property (nonatomic) AWEGeneralSearchModel bindedModel;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) <AWESearchComponentProtocol> commentUserComponent;
@property (nonatomic) <AWESearchComponentProtocol> commentInfoComponent;
@property (nonatomic) <AWESearchComponentProtocol> commentTimeComponent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWESearchEventDispather eventDispather;
@property (nonatomic) @? commentTextHeightChangedBlock;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setCommentTextHeightChangedBlock:;
- (void)commentInfoFullTextFold;
- (id)btm;
- (void)p_createComponents;
- (id)bindedData;
- (void)reloadCurrentSectionAnimated:;
- (void)p_loadComponents;
- (void)setBindedModel:;
- (id)bindedModel;
- (void)p_updateWithModel:;
- (id)commentUserComponent;
- (void)setCommentUserComponent:;
- (id)commentInfoComponent;
- (void)setCommentInfoComponent:;
- (void)fullTextButtonRestore;
- (id)btmLog:;
- (void)openCommentPanel:;
- (id)commentTextHeightChangedBlock;
- (id)commentTimeComponent;
- (void)setCommentTimeComponent:;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)sectionIndex;
- (void)updateWithModel:;
- (void)layoutComponents;
+ (id)containerSizeForModel:width:;
@end
