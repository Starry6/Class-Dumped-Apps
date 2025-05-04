@interface AWEShareCommonReflowAlertModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString descTitle;
@property (nonatomic) NSString openBtnText;
@property (nonatomic) UIImage headImage;
@property (nonatomic) @? openAction;
@property (nonatomic) @? cancelAction;
@property (nonatomic) @? reportAction;
@property (nonatomic) NSDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (id)openAction;
- (void)setOpenAction:;
- (id)reportAction;
- (void)setReportAction:;
- (id)headImage;
- (void)setHeadImage:;
- (void)setDescTitle:;
- (id)descTitle;
- (id)openBtnText;
- (void)setOpenBtnText:;
- (void).cxx_destruct;
- (id)title;
- (void)setCancelAction:;
- (void)setTitle:;
- (id)cancelAction;
@end
