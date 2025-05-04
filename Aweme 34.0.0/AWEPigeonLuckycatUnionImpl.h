@interface AWEPigeonLuckycatUnionImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)callMethod:arguments:completion:;
- (void)_luckycatCheckAppsInfoWithParams:completion:;
- (void)_luckycatOpenAppWithParam:completion:;
- (void)_luckycatActivateWithParams:completion:;
- (void)_luckycatSyncTimeWithParams:completion:;
- (void)_applyContactsPermissionWithParams:completion:;
- (void)_openRecommendFriendsWithParams:completion:;
- (void)_isContactsGrantedWithParams:appId:completion:;
- (id)_invalidParamError;
- (id)_callbackDictWithDataDict:isSuccess:errorMsg:errorCode:;
- (id)aAWEPigeonLuckyCatUnionImplLiteAdapter;
+ (id)pigeonMethodName;
+ (Class)aAWEPigeonLuckyCatUnionImplLiteAdapterClass;
+ (id)create;
@end
