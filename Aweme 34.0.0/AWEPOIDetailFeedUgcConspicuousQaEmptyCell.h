@interface AWEPOIDetailFeedUgcConspicuousQaEmptyCell : UICollectionViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel emptyLabel;
@property (nonatomic) UIView splitLine;
@property (nonatomic) UIView bottomView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel promptLabel;
@property (nonatomic) UIImageView arrowIcon;
@property (nonatomic) UIImageView writeImageView;
@property (nonatomic) UILabel writeEmptyLabel;
@property (nonatomic) UIView writeBottomView;
@property (nonatomic) UILabel writePromptLabel;
@property (nonatomic) UIImageView moreFoldIcon;
@property (nonatomic) AWEPOIFeedUgcQAEntranceInfoModel qaModel;
@property (nonatomic) AWEPOIDetailConstData constData;
@property (nonatomic) NSString creationIDForToComment;
@property (nonatomic) <AWEPOIDetailFeedUgcConspicuousQaEmptyCellDelegate> delegate;
@property (nonatomic) Q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rx_store:didSetWithModule:;
- (id)splitLine;
- (void)setSplitLine:;
- (id)arrowIcon;
- (void)setArrowIcon:;
- (id)trackingParams;
- (id)constData;
- (void)updateCellWithModel:constData:index:;
- (void)setConstData:;
- (id)writeImageView;
- (id)writeEmptyLabel;
- (id)writeBottomView;
- (id)moreFoldIcon;
- (id)writePromptLabel;
- (id)qaModel;
- (void)setQaModel:;
- (void)updateRateCardWithModel:;
- (id)creationIDForToComment;
- (id)trackingParamsForWrite;
- (void)bottomViewDidTap;
- (void)writeViewDidTap;
- (void)moreFoldDidTap;
- (void)didCompleteShow;
- (void)setWriteImageView:;
- (void)setWriteEmptyLabel:;
- (void)setWriteBottomView:;
- (void)setWritePromptLabel:;
- (void)setMoreFoldIcon:;
- (void)setCreationIDForToComment:;
- (void)setScene:;
- (id)promptLabel;
- (id)delegate;
- (void)setPromptLabel:;
- (unsigned long long)scene;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (id)bottomView;
- (void)setIconImageView:;
- (void)setBottomView:;
- (id)emptyLabel;
- (void)setEmptyLabel:;
+ (double)cellHeightForModel:withWidth:;
@end
