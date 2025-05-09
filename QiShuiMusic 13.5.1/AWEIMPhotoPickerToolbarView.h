@interface AWEIMPhotoPickerToolbarView : UIView
@property (nonatomic) UIButton albumButton;
@property (nonatomic) UIButton originalButton;
@property (nonatomic) UIButton sendButton;
@property (nonatomic) NSString sendButtonTitle;
@property (nonatomic) BOOL original;
@property (nonatomic) @? originalValueChangeBlock;
@property (nonatomic) BOOL automaticDisable;
@property (nonatomic) Q sendCount;
- (id)sendButtonTitle;
- (void)setAlbumButton:;
- (id)albumButton;
- (BOOL)automaticDisable;
- (id)initWithFrame:sendButtonTop:components:;
- (id)initWithFrame:sendButtonTop:components:withUnselectImage:withSelectImage:;
- (void)originalButtonPressed:;
- (id)originalValueChangeBlock;
- (void)setAutomaticDisable:;
- (void)setButtonTitle:hideOriginalImage:;
- (void)setOriginal:animated:;
- (void)setOriginalValueChangeBlock:;
- (void)setSendButtonTitle:;
- (void)useLightColor;
- (void).cxx_destruct;
- (BOOL)original;
- (void)setOriginal:;
- (id)sendButton;
- (void)setSendButton:;
- (unsigned long long)sendCount;
- (void)setSendCount:;
- (id)originalButton;
- (void)setOriginalButton:;
@end
