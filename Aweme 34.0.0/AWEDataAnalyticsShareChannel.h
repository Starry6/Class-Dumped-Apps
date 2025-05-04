@interface AWEDataAnalyticsShareChannel : AWEShareBaseChannel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shareImage;
- (void)didSelectShareItem:;
- (void)shareItem:willAppear:;
- (BOOL)prepareToShare;
- (BOOL)isShareItemEnabled;
- (void)monitorItemShow;
- (void)monitorItemClick;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
