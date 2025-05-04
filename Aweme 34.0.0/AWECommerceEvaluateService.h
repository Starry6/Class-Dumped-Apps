@interface AWECommerceEvaluateService : HTSService
@property (nonatomic) UIViewController<AWEAdEvaluateContainerViewController> commentViewController;
@property (nonatomic) AWECommerceCommentModel commentModel;
@property (nonatomic) q appraisalNum;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commentModel;
- (void)setCommentModel:;
- (id)commentViewController;
- (void)setCommentViewController:;
- (id)commentCountWithAwemeModel:;
- (id)commentTabTitleWithAwemeModel:;
- (void)updateCommentCountWithAwemeModel:newCount:;
- (void)commentTabChangedWithAwemeModel:isAdTab:;
- (void)trackCommentTabShowIfNeed:;
- (void)trackCommentTabStayTimeIfNeed:;
- (id)extraParamsWithAwemeModel:;
- (BOOL)shouldShowEvaluateWithAwemeModel:;
- (id)commentViewControllerWithAwemeModel:;
- (void)trackCommentTabClick:;
- (void)setAppraisalNum:;
- (id)extraStayParamsWithAwemeModel:;
- (long long)appraisalNum;
- (void).cxx_destruct;
@end
