@interface UIStoryboardPreviewingSegueTemplateStorage : NSObject
@property (nonatomic) UIView sender;
@property (nonatomic) UIStoryboardPreviewingSegueTemplate previewTemplate;
@property (nonatomic) UIStoryboardSegueTemplate commitTemplate;
- (id)sender;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setSender:;
- (id)previewTemplate;
- (void)setPreviewTemplate:;
- (id)commitTemplate;
- (void)setCommitTemplate:;
@end
