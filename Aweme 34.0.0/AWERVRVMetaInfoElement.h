@interface AWERVRVMetaInfoElement : AWERVVideoInfoBaseElement
@property (nonatomic) AWERVDescriptionView infoView;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isFirstClickExpand;
@property (nonatomic) MASConstraint heightContraint;
@property (nonatomic) BOOL anchorFirstAppear;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)enterLiveRoom:;
- (void)enterUserProfile:;
- (void)showMixPanel;
- (void)descriptionViewDidClickExpand:;
- (void)setHeightContraint:;
- (void)setIsFirstClickExpand:;
- (id)heightContraint;
- (void)setAnchorFirstAppear:;
- (BOOL)isFirstClickExpand;
- (BOOL)anchorFirstAppear;
- (void)setIsExpanded:;
- (BOOL)isExpanded;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (id)infoView;
- (void)setInfoView:;
@end
