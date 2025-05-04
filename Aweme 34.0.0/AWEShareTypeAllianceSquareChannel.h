@interface AWEShareTypeAllianceSquareChannel : AWEShareBaseChannel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shareWithCompletion:;
- (id)shareImage;
- (void)didSelectShareItem:;
- (void)shareItem:willAppear:;
- (long long)shareCategory;
- (id)trackingLabel;
- (id)allianceChannelTrackParams;
- (BOOL)share;
- (void)dealloc;
- (BOOL)isDarkTheme;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
