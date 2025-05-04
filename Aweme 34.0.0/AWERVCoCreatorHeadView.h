@interface AWERVCoCreatorHeadView : UIView
@property (nonatomic) UIView<AFDRichAwemeFullPageCoCreatorContainerProtocol> coCreatorContainerView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWERVDetailPageContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)updateDataWithModel:context:;
- (id)coCreatorContainerView;
- (void)showCoCreatorPostListPanel:fromPage:coCreatorModel:;
- (void)setCoCreatorContainerView:;
- (void)updateFollowStatusWithUser:status:;
- (void)setCoCreatorContainerLogExtraDict;
- (void)setModel:;
- (void)dealloc;
- (id)initWithFrame:;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
- (BOOL)hasMask;
@end
