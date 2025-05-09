@interface AWEHPSearchBubbleEntranceView : UIControl
@property (nonatomic) UILabel label;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIButton searchIcon;
@property (nonatomic) UIView focusView;
@property (nonatomic) UIImageView captionIcon;
@property (nonatomic) UIView separatorLine;
@property (nonatomic) NSString text;
@property (nonatomic) NSString link;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString authorId;
@property (nonatomic) NSDictionary logPb;
@property (nonatomic) AWECaptionInfoModel captionInfo;
@property (nonatomic) NSInteger showStyle;
@property (nonatomic) AWEURLModel iconUrl;
@property (nonatomic) @? searchButtonDidClick;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)iconUrl;
- (void)setIconUrl:;
- (int)showStyle;
- (void)setLogPb:;
- (id)logPb;
- (void)setShowStyle:;
- (id)searchIcon;
- (void)setSearchIcon:;
- (void)setupControl;
- (id)captionIcon;
- (void)searchIconClicked:;
- (void)setCaptionIcon:;
- (id)searchButtonDidClick;
- (void)setSearchButtonDidClick:;
- (void)setLabel:;
- (void)setText:;
- (id)initWithFrame:;
- (id)text;
- (id)label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)link;
- (void)setLink:;
- (id)focusView;
- (void)setCloseButton:;
- (id)closeButton;
- (id)itemId;
- (void)setFocusView:;
- (id)separatorLine;
- (void)setSeparatorLine:;
- (void)setCaptionInfo:;
- (id)captionInfo;
- (id)authorId;
- (void)setAuthorId:;
- (void)setItemId:;
+ (double)bubbleWidthWithText:iconUrl:showStyle:;
@end
