@interface AWEIMCreateGroupShareChannel : AWEShareBaseChannel
- (void)shareWithCompletion:;
- (id)shareImage;
- (BOOL)prepareToShare;
- (long long)shareCategory;
- (id)trackingLabel;
- (BOOL)isShareItemEnabled;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
+ (BOOL)p_isPlanB;
@end
