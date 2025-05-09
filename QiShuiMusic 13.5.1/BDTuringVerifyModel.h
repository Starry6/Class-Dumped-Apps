@interface BDTuringVerifyModel : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) q verifyType;
@property (nonatomic) NSString plugin;
@property (nonatomic) NSString region;
@property (nonatomic) q showToast;
@property (nonatomic) NSString userID;
@property (nonatomic) BDTuringVerifyState state;
@property (nonatomic) NSString handlerName;
@property (nonatomic) BOOL supportLandscape;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString appID;
@property (nonatomic) NSString plugin;
@property (nonatomic) NSString region;
@property (nonatomic) q showToast;
@property (nonatomic) q verifyType;
@property (nonatomic) NSString userID;
@property (nonatomic) BDTuringVerifyState state;
@property (nonatomic) NSString handlerName;
@property (nonatomic) BOOL supportLandscape;
@property (nonatomic) q regionType;
@property (nonatomic) @? callback;
@property (nonatomic) BOOL hideLoading;
@property (nonatomic) NSString ui_type;
@property (nonatomic) NSString subtype;
@property (nonatomic) q callType;
- (void)loadVerifyView:;
- (void)setHideLoading:;
- (id)ui_type;
- (id)addPreloadQuery:;
- (void)appendCommonKVParameters:;
- (void)appendKVToEventParameters:;
- (void)appendKVToQueryParameters:;
- (id)configQuery:;
- (void)configVerifyView:;
- (void)createState;
- (id)createVerifyView;
- (void)handleResult:;
- (void)handleResultStatus:;
- (void)handleVerifyProtectAndCallback:result:appID:;
- (BOOL)hideLoading;
- (void)loadVerifyView:withQuery:;
- (void)notifyWithCallback:appID:callback:result:;
- (void)notifyWithCallbackInner:postParameters:requestURL:appID:callback:result:;
- (void)setShowToast:;
- (void)setSupportLandscape:;
- (void)setUi_type:;
- (long long)showToast;
- (BOOL)supportLandscape;
- (id)callback;
- (id)subtype;
- (void)setCallback:;
- (id)userID;
- (id)init;
- (void)setRegion:;
- (void)setState:;
- (id)region;
- (void)setSubtype:;
- (void)setAppID:;
- (id)state;
- (id)appID;
- (void).cxx_destruct;
- (void)setUserID:;
- (void)setPlugin:;
- (id)plugin;
- (long long)regionType;
- (long long)callType;
- (void)setCallType:;
- (long long)verifyType;
- (void)setVerifyType:;
- (void)setRegionType:;
- (void)setHandlerName:;
- (id)handlerName;
+ (id)modelWithParameter:;
+ (id)parameterModelWithParameter:;
+ (id)pictureModelWithCode:;
+ (id)preloadModel;
+ (id)smsModelWithScene:;
@end
