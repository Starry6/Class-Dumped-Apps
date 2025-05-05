@interface AWEIMShareChannel : AWEShareBaseChannel
- (id)normalImage;
- (BOOL)prepareToShare;
- (long long)shareCategory;
- (id)shareImage;
- (void)shareWithCompletion:;
- (void)showShareList;
- (void)showShareListWithCompletion:;
- (id)trackingLabel;
- (id)smallImage;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
+ (id)additionalShareMaskArray;
@end
