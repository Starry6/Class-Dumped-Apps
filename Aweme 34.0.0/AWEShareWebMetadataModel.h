@interface AWEShareWebMetadataModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString tipsForCopy;
@property (nonatomic) NSString belong;
@property (nonatomic) NSURL imageURL;
@property (nonatomic) NSString localImageIdentifier;
@property (nonatomic) NSURL shareURL;
@property (nonatomic) NSURL reportUrl;
@property (nonatomic) NSURL internalURL;
@property (nonatomic) BOOL usesOriginalURL;
@property (nonatomic) BOOL showsQRCode;
@property (nonatomic) BOOL hidesIMContacts;
@property (nonatomic) BOOL hidesActionItems;
@property (nonatomic) NSString activityScene;
@property (nonatomic) BOOL showsSecondLineForQRCode;
@property (nonatomic) NSArray customShareItems;
@property (nonatomic) NSArray customActionItems;
@property (nonatomic) NSString hint;
@property (nonatomic) q aweType;
@property (nonatomic) NSString msgTrack;
@property (nonatomic) NSString uiExtra;
@property (nonatomic) NSString bgURL;
@property (nonatomic) NSString imImageUrl;
@property (nonatomic) NSString webUrlV2;
@property (nonatomic) NSString webUrlV2Version;
@property (nonatomic) BOOL hideToast;
@property (nonatomic) BOOL hideBottomTips;
@property (nonatomic) NSDictionary logParams;
@property (nonatomic) BOOL onceClose;
@property (nonatomic) NSString excludeGroupType;
@property (nonatomic) BOOL topVCCloseOnCallback;
@property (nonatomic) BOOL disableForward;
@property (nonatomic) AWEShareWebMetaCommandCustomShareConfig customCommandConfig;
@property (nonatomic) AWEShareWebMetaCustomMobEventMap customMobEventMap;
@property (nonatomic) NSDictionary imExtra;
@property (nonatomic) NSArray shareEntriesForbidList;
@property (nonatomic) NSDictionary ecomShareTrackParams;
@property (nonatomic) NSDictionary liveShareExtraParams;
@property (nonatomic) NSString customParams;
@property (nonatomic) BOOL hideMask;
@property (nonatomic) AWEShareWebMetaCutScreenInfo cutScreenInfo;
@property (nonatomic) NSDictionary checkBoxConfig;
@property (nonatomic) NSString takeBlessingVideoURL;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCustomParams:;
- (id)customParams;
- (BOOL)disableForward;
- (long long)aweType;
- (void)setDisableForward:;
- (BOOL)hideMask;
- (void)setHideMask:;
- (id)ecomShareTrackParams;
- (void)setEcomShareTrackParams:;
- (id)imExtra;
- (void)setImExtra:;
- (id)logParams;
- (void)setLogParams:;
- (id)bgURL;
- (void)setBgURL:;
- (id)takeBlessingVideoURL;
- (id)reportUrl;
- (void)setAweType:;
- (id)liveShareExtraParams;
- (void)setLiveShareExtraParams:;
- (id)msgTrack;
- (void)setHideToast:;
- (void)setHideBottomTips:;
- (void)setTopVCCloseOnCallback:;
- (BOOL)hideBottomTips;
- (id)localImageIdentifier;
- (id)imImageUrl;
- (void)setImImageUrl:;
- (BOOL)hideToast;
- (id)customCommandConfig;
- (id)webUrlV2;
- (id)webUrlV2Version;
- (void)setMsgTrack:;
- (id)uiExtra;
- (void)setUiExtra:;
- (id)customMobEventMap;
- (BOOL)topVCCloseOnCallback;
- (id)excludeGroupType;
- (BOOL)hidesIMContacts;
- (BOOL)onceClose;
- (void)setOnceClose:;
- (void)setExcludeGroupType:;
- (void)setReportUrl:;
- (void)setHidesIMContacts:;
- (void)setWebUrlV2Version:;
- (void)setBelong:;
- (id)shareEntriesForbidList;
- (BOOL)hidesActionItems;
- (BOOL)showsQRCode;
- (id)cutScreenInfo;
- (BOOL)showsSecondLineForQRCode;
- (void)setCustomCommandConfig:;
- (id)customShareItems;
- (id)belong;
- (id)tipsForCopy;
- (BOOL)usesOriginalURL;
- (void)setHidesActionItems:;
- (id)checkBoxConfig;
- (void)setTipsForCopy:;
- (void)setLocalImageIdentifier:;
- (void)setUsesOriginalURL:;
- (void)setShowsQRCode:;
- (id)activityScene;
- (void)setActivityScene:;
- (void)setShowsSecondLineForQRCode:;
- (void)setCustomShareItems:;
- (void)setWebUrlV2:;
- (void)setCustomMobEventMap:;
- (void)setShareEntriesForbidList:;
- (void)setCutScreenInfo:;
- (void)setCheckBoxConfig:;
- (void)setTakeBlessingVideoURL:;
- (id)itemID;
- (void)setItemID:;
- (id)content;
- (id)shareURL;
- (void)setContent:;
- (id)imageURL;
- (void).cxx_destruct;
- (id)title;
- (void)setImageURL:;
- (void)setTitle:;
- (void)setShareURL:;
- (id)hint;
- (void)setHint:;
- (id)customActionItems;
- (void)setInternalURL:;
- (id)internalURL;
- (void)setCustomActionItems:;
+ (id)boolValueTransformer;
+ (id)usesOriginalURLJSONTransformer;
+ (id)showsQRCodeJSONTransformer;
+ (id)hidesIMContactsJSONTransformer;
+ (id)hidesActionItemsJSONTransformer;
+ (id)aweTypeJSONTransformer;
+ (id)customShareItemsJSONTransformer;
+ (id)customActionItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
