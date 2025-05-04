@interface AWEXiGuaCommentInputViewBarController : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> context;
@property (nonatomic) AWEXiGuaCommentInputView xiguaInputView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (void)bottomBarAddedToContainer:;
- (id)aAWEPadDetailTableAdapter;
- (id)xiguaInputView;
- (void)setXiguaInputView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (Class)contextClass;
- (id)bottomBarView;
+ (Class)aAWEPadDetailTableAdapterClass;
@end
