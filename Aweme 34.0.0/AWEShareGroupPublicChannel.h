@interface AWEShareGroupPublicChannel : AWEShareBaseChannel
- (void)shareWithCompletion:;
- (long long)shareCategory;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
