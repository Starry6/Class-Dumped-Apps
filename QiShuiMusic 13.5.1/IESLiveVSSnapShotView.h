@interface IESLiveVSSnapShotView : UIView
@property (nonatomic) UIImageView frameImageView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImage frameImage;
@property (nonatomic) NSString userID;
- (id)frameImage;
- (id)frameImageView;
- (id)initWithFrameImage:userID:;
- (void)setFrameImage:;
- (void)setFrameImageView:;
- (id)snapShotImageForSave;
- (id)userID;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)setUserID:;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupSubviews;
@end
