@interface AWEReportShareChannel : AWEShareBaseChannel
@property (nonatomic) NSString shareType;
- (id)shareImage;
- (void)checkTargetIndexWithContext:;
- (id)shareTitleFromSettings;
- (BOOL)shouldShowReportChannelInMiniLunaWithContext:;
- (BOOL)share;
- (void).cxx_destruct;
- (void)setShareType:;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
+ (id)channelWithType:;
@end
