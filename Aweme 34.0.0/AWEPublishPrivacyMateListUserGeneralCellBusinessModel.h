@interface AWEPublishPrivacyMateListUserGeneralCellBusinessModel : NSObject
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) NSString pageIdentifier;
- (BOOL)shouldShowRelationTag;
- (BOOL)shouldMonitorActiveStatus;
- (BOOL)shouldShowRelationButton;
- (BOOL)shouldShowMoreActionButton;
- (BOOL)shouldShowBottomLineView;
- (id)subTitle;
- (id)cellBackgroundColor;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (id)pageIdentifier;
- (void)setPageIdentifier:;
@end
