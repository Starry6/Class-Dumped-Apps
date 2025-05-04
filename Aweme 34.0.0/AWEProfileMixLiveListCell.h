@interface AWEProfileMixLiveListCell : UITableViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLable;
@property (nonatomic) UILabel watchCountLable;
@property (nonatomic) UILabel durationLable;
@property (nonatomic) UILabel dateLable;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSDateFormatter dateFormatter;
- (id)titleLable;
- (void)setTitleLable:;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)bottomInfoLable;
- (id)watchCountLable;
- (void)setWatchCountLable:;
- (id)durationLable;
- (void)setDurationLable:;
- (id)dateLable;
- (void)setDateLable:;
- (void)setModel:;
- (void)setDateFormatter:;
- (id)model;
- (id)dateFormatter;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setUpUI;
@end
