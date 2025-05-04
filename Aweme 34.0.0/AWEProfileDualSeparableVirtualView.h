@interface AWEProfileDualSeparableVirtualView : AWERLVirtualView
@property (nonatomic) AWERLVirtualView prefixView;
@property (nonatomic) AWERLVirtualView suffixView;
@property (nonatomic) AWERLVirtualView separatorView;
@property (nonatomic) BOOL markShouldHideSeparator;
@property (nonatomic) BOOL forceSwitchLines;
@property (nonatomic) double lineGap;
@property (nonatomic) BOOL forceInNewLine;
- (id)layoutThatFits:;
- (BOOL)canRenderView;
- (void)rebuildSubviews;
- (void)setSuffixView:;
- (id)suffixView;
- (BOOL)forceSwitchLines;
- (void)setMarkShouldHideSeparator:;
- (BOOL)markShouldHideSeparator;
- (void)removeSeparatorView;
- (void)updatePrefixView:suffixView:separatorView:;
- (void)setForceSwitchLines:;
- (void)setLineGap:;
- (BOOL)forceInNewLine;
- (void)setForceInNewLine:;
- (void)setSeparatorView:;
- (void).cxx_destruct;
- (id)separatorView;
- (id)prefixView;
- (void)setPrefixView:;
- (double)lineGap;
@end
