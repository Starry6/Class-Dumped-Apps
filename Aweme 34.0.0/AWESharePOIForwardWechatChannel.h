@interface AWESharePOIForwardWechatChannel : AWEShareBaseChannel
- (void)shareWithCompletion:;
- (BOOL)prepareToShare;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
