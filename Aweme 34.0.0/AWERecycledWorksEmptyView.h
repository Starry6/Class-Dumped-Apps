@interface AWERecycledWorksEmptyView : UIView
@property (nonatomic) DUXBaseImageView deleteIcon;
@property (nonatomic) DUXBaseLabel tipsLabel;
@property (nonatomic) DUXBaseLabel subTipsLabel;
@property (nonatomic) NSString iconName;
@property (nonatomic) NSString tips;
@property (nonatomic) NSString subTips;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (id)subTipsLabel;
- (void)setSubTipsLabel:;
- (id)deleteIcon;
- (id)initWithIconName:tips:subTips:;
- (void)setDeleteIcon:;
- (id)subTips;
- (void)setSubTips:;
- (id)iconName;
- (id)tips;
- (void).cxx_destruct;
- (void)setIconName:;
- (void)setTips:;
- (void)setupUI;
@end
