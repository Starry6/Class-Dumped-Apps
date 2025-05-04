@interface AWECloudAlbumHelperImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)inTodayAwemeFirstPageResponseFromCacheWithPastType:;
- (long long)inTodayAwemeFirstPageResponseFromCacheType;
- (void)setCloudAlbumSwitch:;
- (long long)cloudAlbumUploadAuthorization;
- (void)setCloudAlbumUploadAuthorization:;
- (void)showCloudAlbumOnlinePopupViewWithEnterFrom:execute:;
- (long long)cloudAlbumSwitchValue;
- (BOOL)cloudAlbumUploadAuthorizationEnable;
- (void)authorizationToUploadWithCompletion:;
- (void)updateUserSettingWithCompletion:;
- (void)showInTodayAggregatePhtotAuthorizationPopupViewWithEnterFrom:isOwnPhoto:schemaData:execute:;
@end
