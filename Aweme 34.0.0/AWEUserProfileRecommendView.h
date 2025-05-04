@interface AWEUserProfileRecommendView : UIView
@property (nonatomic) UIImageView recommendImageView;
@property (nonatomic) UILabel recommendLabel;
- (void)setRecommendLabel:;
- (id)recommendLabel;
- (id)recommendImageView;
- (void)setRecommendImageView:;
- (void)configRecommendReasonWithText:attachmentIcon:;
- (void)testAttributedStringWithHTMLString:;
- (id)init;
- (void).cxx_destruct;
@end
