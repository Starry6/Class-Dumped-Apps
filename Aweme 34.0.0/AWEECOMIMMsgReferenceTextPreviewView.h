@interface AWEECOMIMMsgReferenceTextPreviewView : UIView
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) YYLabel messageTextLabel;
@property (nonatomic) @? onPreviewClick;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updatePreViewWithWithStr:;
- (void)setOnPreviewClick:;
- (id)messageTextLabel;
- (id)onPreviewClick;
- (void)setMessageTextLabel:;
- (void)setScrollView:;
- (id)initWithFrame:;
- (id)scrollView;
- (void).cxx_destruct;
- (void)tapAction:;
+ (id)textFont;
+ (id)textColor;
@end
