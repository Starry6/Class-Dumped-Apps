@interface AWECoverTextStoryTextView : ACCTextStickerView
@property (nonatomic) double fontScale;
@property (nonatomic) @? boundsDidChangedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateDisplay;
- (id)initWithTextInfo:options:;
- (id)boundsDidChangedBlock;
- (void)stickerViewBeginEditing;
- (void)stickerViewEndEditing;
- (void)updateWithEditingModel:;
- (id)getCoverTexts;
- (unsigned long long)getCoverTextCursorLocation;
- (id)getCoverTextStoryTextInfo;
- (void)setPlaceHolderTextViewHidden:;
- (void)updateSizeAfterChange;
- (void)setBoundsDidChangedBlock:;
- (void).cxx_destruct;
- (double)fontScale;
- (void)setFontScale:;
@end
