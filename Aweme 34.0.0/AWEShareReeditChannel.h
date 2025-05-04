@interface AWEShareReeditChannel : AWEShareBaseChannel
- (void)shareWithCompletion:;
- (id)shareImage;
- (BOOL)prepareToShare;
- (BOOL)isShareItemEnabled;
- (id)editBarInfo;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
