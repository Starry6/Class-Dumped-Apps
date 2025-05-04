@interface AWEIMFeedImageAlbumCardMessage : AWEIMFeedCardMessage
@property (nonatomic) q imageCount;
@property (nonatomic) q currentImageIndex;
@property (nonatomic) AWEURLModel coverURLV2;
@property (nonatomic) AWEURLModel realCoverURL;
- (long long)currentImageIndex;
- (void)setCurrentImageIndex:;
- (id)initWithContentDict:;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)shouldChangeVisibleStatus;
- (id)itemIDUsedForContentAvailableRefresh;
- (BOOL)isAllowedForward;
- (id)coverSizeWhenQuotedIfHave;
- (void)setCoverURLV2:;
- (id)realCoverURL;
- (void)setRealCoverURL:;
- (id)coverURLV2;
- (long long)imageCount;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setImageCount:;
@end
