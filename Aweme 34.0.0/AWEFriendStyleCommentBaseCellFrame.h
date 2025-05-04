@interface AWEFriendStyleCommentBaseCellFrame : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} containerFrame;
@property (nonatomic) AWEConcernCardModel cardModel;
@property (nonatomic) Q displayStyle;
@property (nonatomic) Q browsedType;
@property (nonatomic) double containerWidth;
- (id)cardModel;
- (void)setCardModel:;
- (void)setBrowsedType:;
- (void)calculateLayoutWithContainerWidth:;
- (double)commentInnerLeftMargin;
- (double)commentInnerRightMargin;
- (id)tranferToRouterWithUserId:;
- (unsigned long long)browsedType;
- (void)configWithCardModel:containerWidth:displayStyle:;
- (void)setDisplayStyle:;
- (id)init;
- (id)containerFrame;
- (unsigned long long)displayStyle;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)setContainerFrame:;
- (double)containerWidth;
- (void)setContainerWidth:;
@end
