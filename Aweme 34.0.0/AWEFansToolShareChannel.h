@interface AWEFansToolShareChannel : AWEShareBaseChannel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shareImage;
- (void)didSelectShareItem:;
- (void)shareItem:willAppear:;
- (void)checkTargetIndexWithContext:;
- (id)trackingLabel;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
