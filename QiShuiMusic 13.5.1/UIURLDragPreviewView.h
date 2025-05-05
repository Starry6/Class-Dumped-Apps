@interface UIURLDragPreviewView : UIView
@property (nonatomic) NSString title;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString urlText;
- (id)url;
- (void)setTitle:;
- (void)setUrl:;
- (id)initWithFrame:;
- (id)title;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setUrlText:;
- (id)urlText;
+ (id)_titleFont;
+ (id)viewWithTitle:URL:;
+ (id)viewWithURL:;
+ (id)viewWithTitle:URLText:;
+ (id)viewWithURLText:;
+ (id)_urlFont;
@end
