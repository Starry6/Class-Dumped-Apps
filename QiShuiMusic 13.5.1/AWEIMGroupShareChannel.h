@interface AWEIMGroupShareChannel : AWEShareBaseChannel
- (BOOL)prepareToShare;
- (long long)shareCategory;
- (id)shareImage;
- (id)trackingLabel;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
