@interface SFLinkPreviewHeaderContentView : UIButton
@property (nonatomic) <SFLinkPreviewHeaderContentViewDelegate> delegate;
@property (nonatomic) NSString domain;
@property (nonatomic) BOOL previewEnabled;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)domain;
- (void)setDomain:;
- (void)updateConstraints;
- (void)setPreviewEnabled:;
- (void)_togglePreviewButtonPressed;
- (void)_updateDomainWithHidePreviewActionConstraints;
- (void)_updateSafariIconWithShowPreviewActionConstraints;
- (BOOL)isPreviewEnabled;
@end
