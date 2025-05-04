@interface AWEShareEditMusicChannel : AWEShareBaseChannel
- (id)shareImage;
- (BOOL)prepareToShare;
- (BOOL)isShareItemEnabled;
- (id)editMusicMultiTimeInfo;
- (void)trackWhenEditMusicIconDidClick;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
