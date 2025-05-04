@interface AWEIMOfficialContentDetailCardViewCompress : UIView
@property (nonatomic) AWENotificationModelNew model;
@property (nonatomic) UILabel headerLabel;
@property (nonatomic) UIView textsContainerView;
@property (nonatomic) AWEIMOfficialContentFoldableTextView foldableTextView;
- (id)foldableTextView;
- (void)setFoldableTextView:;
- (void)configWithModel:context:needTrackEvent:;
- (void)setTextsContainerView:;
- (id)textsContainerView;
- (void)hideAllChildViews;
- (void)setModel:;
- (id)init;
- (id)model;
- (void).cxx_destruct;
- (void)setHeaderLabel:;
- (id)headerLabel;
@end
