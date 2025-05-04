@interface AWEShareDeleteChannel : AWEShareBaseChannel
- (void)shareWithCompletion:;
- (id)shareImage;
- (BOOL)prepareToShare;
- (BOOL)isShareItemEnabled;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
