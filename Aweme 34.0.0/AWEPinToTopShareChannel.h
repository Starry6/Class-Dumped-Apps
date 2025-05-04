@interface AWEPinToTopShareChannel : AWEShareBaseChannel
- (void)shareWithCompletion:;
- (id)shareImage;
- (BOOL)prepareToShare;
- (void)checkTargetIndexWithContext:;
- (id)shareTitleFromSettings;
- (BOOL)isShareItemEnabled;
- (id)shareImageFromSettings;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
