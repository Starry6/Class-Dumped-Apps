@interface AWEPostPageInfoSupplementaryElement : AWEPostPageCellElement
- (void)elementAppear;
- (BOOL)forceReceiveEvents;
- (BOOL)imageAlbumShortenCreationEnableChallenge;
- (void)addChallengeStickerIfNeed;
- (BOOL)isVisible;
- (id)cell;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end
