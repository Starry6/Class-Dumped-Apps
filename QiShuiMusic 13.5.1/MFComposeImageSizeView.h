@interface MFComposeImageSizeView : MFMailComposeHeaderView
@property (nonatomic) <MFComposeImageSizeViewDelegate> delegate;
- (void)layoutSubviews;
- (void)setScale:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)segmentedControlChanged;
- (unsigned long long)_scaleLabelIndexForScale:;
- (unsigned long long)_insertIndexForScale:;
- (void)setSizeDescription:forScale:;
- (void)removeSizeDescriptionForScale:;
@end
