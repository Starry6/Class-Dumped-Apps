@interface AWEAutoreadPasteboardSettingPopupGuideModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString rightTip;
- (id)rightTip;
- (void)setRightTip:;
- (id)initWithTitle:content:rightTip:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
