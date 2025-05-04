@interface AWECommentListInputViewBarContext : NSObject
@property (nonatomic) <AWEAwemeDetailBottomBarCommonContextProtocol> commonCtx;
@property (nonatomic) UIView containerView;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) NSString cityInfoString;
@property (nonatomic) @? commentInputViewIsShowBlock;
@property (nonatomic) @? getInteractionControllerBlock;
@property (nonatomic) @? getCellVCLogExtraBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cityInfoString;
- (void)setCityInfoString:;
- (void)setLogExtraDict:;
- (id)logExtraDict;
- (id)commonCtx;
- (void)setCommonCtx:;
- (id)getInteractionControllerBlock;
- (void)setGetInteractionControllerBlock:;
- (void)setGetCellVCLogExtraBlock:;
- (id)commentInputViewIsShowBlock;
- (void)setCommentInputViewIsShowBlock:;
- (id)getCellVCLogExtraBlock;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
@end
