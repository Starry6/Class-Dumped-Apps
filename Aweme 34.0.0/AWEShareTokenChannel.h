@interface AWEShareTokenChannel : AWEShareBaseChannel
@property (nonatomic) q shareCategory;
- (void)shareWithCompletion:;
- (id)shareImage;
- (long long)shareCategory;
- (id)trackingLabel;
- (void)setShareCategory:;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
