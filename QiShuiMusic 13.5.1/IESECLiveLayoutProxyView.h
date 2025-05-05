@interface IESECLiveLayoutProxyView : IESECEventForwardingView
@property (nonatomic) {UIEdgeInsets=dddd} insets;
@property (nonatomic) BOOL existAttachedView;
@property (nonatomic) BOOL useFrameConstraints;
@property (nonatomic) BOOL useAttachedViewSizeConstraints;
- (id)deAttach;
- (BOOL)existAttachedView;
- (void)setUseAttachedViewSizeConstraints:;
- (void)setUseFrameConstraints:;
- (BOOL)useAttachedViewSizeConstraints;
- (BOOL)useFrameConstraints;
- (void)attach:;
- (void)layoutSubviews;
- (void)setInsets:;
- (id)insets;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
