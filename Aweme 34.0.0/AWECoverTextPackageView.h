@interface AWECoverTextPackageView : UIView
@property (nonatomic) AWECoverTextPackageInnerView innerView;
@property (nonatomic) Q inputLocation;
@property (nonatomic) AWECoverTextPackage textPackageConfig;
@property (nonatomic) double fontScale;
@property (nonatomic) @? boundsDidChangedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setInnerView:;
- (id)textPackageConfig;
- (void)setTextPackageConfig:;
- (id)boundsDidChangedBlock;
- (unsigned long long)inputLocation;
- (void)p_becomeFirstResponderWithCursorLocation:;
- (void)setInputLocation:;
- (void)p_updateTexts:;
- (void)stickerViewBeginEditing;
- (void)stickerViewEndEditing;
- (void)updateWithEditingModel:;
- (id)getCoverTexts;
- (unsigned long long)getCoverTextCursorLocation;
- (id)getCoverTextStoryTextInfo;
- (void)setPlaceHolderTextViewHidden:;
- (void)updateSizeAfterChange;
- (void)setBoundsDidChangedBlock:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateBounds;
- (double)fontScale;
- (void)setFontScale:;
- (id)innerView;
@end
