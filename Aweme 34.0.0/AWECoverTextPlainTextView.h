@interface AWECoverTextPlainTextView : UIView
@property (nonatomic) AWECoverTextTextView textView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double fontScale;
@property (nonatomic) @? boundsDidChangedBlock;
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
- (id)textView;
- (void)setTextView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateBounds;
- (void)textViewDidChange:;
- (double)fontScale;
- (void)setFontScale:;
@end
