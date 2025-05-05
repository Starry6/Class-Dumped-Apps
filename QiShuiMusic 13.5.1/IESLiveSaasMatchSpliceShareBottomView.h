@interface IESLiveSaasMatchSpliceShareBottomView : UIView
@property (nonatomic) IESLiveImageView saveIconImageView;
@property (nonatomic) UILabel saveDescribeLabel;
@property (nonatomic) IESLiveImageView scanIconImageView;
@property (nonatomic) UILabel scanDescribeLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)downLoadCompletion;
- (id)saveDescribeLabel;
- (id)saveIconImageView;
- (id)scanDescribeLabel;
- (id)scanIconImageView;
- (void)setDownLoadCompletion:;
- (void)setSaveDescribeLabel:;
- (void)setSaveIconImageView:;
- (void)setScanDescribeLabel:;
- (void)setScanIconImageView:;
- (void)startLoadSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)setupSubviews;
@end
