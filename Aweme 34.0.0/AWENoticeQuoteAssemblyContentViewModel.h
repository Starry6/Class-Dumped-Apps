@interface AWENoticeQuoteAssemblyContentViewModel : NSObject
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString hint;
@property (nonatomic) NSString content;
@property (nonatomic) NSString openURLSchema;
@property (nonatomic) BOOL showBackgroundColor;
@property (nonatomic) BOOL showRightImageView;
- (id)openURLSchema;
- (void)setOpenURLSchema:;
- (BOOL)showBackgroundColor;
- (void)setShowBackgroundColor:;
- (BOOL)showRightImageView;
- (void)setShowRightImageView:;
- (void)setIconURL:;
- (id)init;
- (id)content;
- (id)iconURL;
- (void)setContent:;
- (void).cxx_destruct;
- (id)hint;
- (void)setHint:;
@end
