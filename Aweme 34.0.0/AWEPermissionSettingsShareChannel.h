@interface AWEPermissionSettingsShareChannel : AWEShareBaseChannel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shareImage;
- (void)shareItem:willAppear:;
- (BOOL)prepareToShare;
- (BOOL)shouldForbidChangePrivacyForXiguaStartAtlas;
- (BOOL)isShareItemEnabled;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
