@interface SFCrashBanner : SFPinnableBanner
@property (nonatomic) UIButton closeButton;
@property (nonatomic) NSString backdropGroupName;
@property (nonatomic) Q messageType;
@property (nonatomic) NSString bannerText;
@property (nonatomic) NSString manuallyWrappedBannerText;
- (unsigned long long)messageType;
- (void)layoutSubviews;
- (void)setBackdropGroupName:;
- (id)initWithFrame:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setMessageType:;
- (id)backdropGroupName;
- (id)closeButton;
- (void)setCloseButton:;
- (void)themeDidChange;
- (BOOL)_shouldUseManuallyWrappedCrashMessageForWidth:;
- (id)_labelLayoutSizeForWidth:;
- (void)setBannerText:manuallyWrappedBannerText:;
- (id)bannerText;
- (id)manuallyWrappedBannerText;
@end
