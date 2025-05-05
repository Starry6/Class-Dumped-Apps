@interface SFNanoDomainContainerView : UIView
@property (nonatomic) double maximumHeight;
@property (nonatomic) _SFBrowserView browserView;
@property (nonatomic) @? platterTapAction;
- (void)setMaximumHeight:;
- (double)maximumHeight;
- (void).cxx_destruct;
- (id)browserView;
- (void)setBrowserView:;
- (void)updateWithDomain:isSecure:showsNotSecureAnnotation:;
- (id)platterTapAction;
- (void)setPlatterTapAction:;
+ (double)defaultHeight;
+ (double)defaultTopOffset;
+ (double)defaultHeightInsideQuickboard;
@end
