@interface AWEIMAchieveMateCardProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) BOOL backgroundImageIsBright;
@property (nonatomic) NSString messageID;
@property (nonatomic) @? clickBlock;
@property (nonatomic) @? showBlock;
- (void)setHasBackground:;
- (void)setClickBlock:;
- (id)clickBlock;
- (id)showBlock;
- (void)setShowBlock:;
- (void)setBackgroundImageIsBright:;
- (BOOL)backgroundImageIsBright;
- (id)messageID;
- (id)subtitle;
- (void)setSubtitle:;
- (void)setMessageID:;
- (BOOL)hasBackground;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
