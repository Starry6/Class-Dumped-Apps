@interface AWEFriendsImpl.VideoAlbumContentHandler : BDMultiContentContainer.BaseContentHandler
@property (nonatomic) q currentIndex;
- (void)scrollToIndex:offset:;
- (long long)currentIndex;
@end
