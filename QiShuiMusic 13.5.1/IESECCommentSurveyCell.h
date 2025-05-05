@interface IESECCommentSurveyCell : UICollectionViewCell
@property (nonatomic) IESECCommentSurveyManager service;
@property (nonatomic) UIView surveyView;
@property (nonatomic) @? needUpdateLayout;
@property (nonatomic) @? removeFromList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadSurvey:;
- (void)needRemoveWithToast:;
- (void)needRemoveWithToast:forceSubmit:;
- (void)needUpdate;
- (id)needUpdateLayout;
- (void)setNeedUpdateLayout:;
- (void)setRemoveFromList:;
- (void)setSurveyView:;
- (id)surveyView;
- (void)setService:;
- (id)service;
- (void).cxx_destruct;
- (id)removeFromList;
@end
