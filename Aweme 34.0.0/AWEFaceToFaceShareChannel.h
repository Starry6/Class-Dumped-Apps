@interface AWEFaceToFaceShareChannel : AWEShareBaseChannel
- (id)shareImage;
- (void)shareItem:willAppear:;
- (id)makeItemWithStyle:inView:;
- (id)trackEnterFrom;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
