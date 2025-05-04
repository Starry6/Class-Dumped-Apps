@interface AWEIMGroupShareChannel : AWEShareBaseChannel
- (id)shareImage;
- (BOOL)prepareToShare;
- (long long)shareCategory;
- (id)trackingLabel;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
