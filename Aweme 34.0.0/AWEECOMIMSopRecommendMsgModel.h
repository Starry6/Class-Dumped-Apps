@interface AWEECOMIMSopRecommendMsgModel : AWEECOMIMBaseMsgModel
@property (nonatomic) NSString tipContent;
@property (nonatomic) NSArray sopAction;
@property (nonatomic) NSAttributedString attributedContent;
- (id)attributedContent;
- (id)sopAction;
- (void)setAttributedContent:;
- (void)setSopAction:;
- (void).cxx_destruct;
- (id)initWithMessage:;
- (void)setTipContent:;
- (id)tipContent;
+ (Class)cellClass;
@end
