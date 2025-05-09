@interface AWEAdLinkModel : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q preloadType;
@property (nonatomic) AWEOriginalAdPreloadModel preloadData;
@property (nonatomic) NSNumber creativeID;
@property (nonatomic) NSString type;
@property (nonatomic) NSString webTitle;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString openURL;
@property (nonatomic) NSString ironManURL;
@property (nonatomic) AWEURLModel avatarIcon;
@property (nonatomic) NSString logExtra;
@property (nonatomic) q showType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString commentTitle;
@property (nonatomic) NSString featureDesc;
@property (nonatomic) BOOL isPreview;
@property (nonatomic) AWEURLModel commentAvatarIcon;
@property (nonatomic) NSString label;
@property (nonatomic) AWEURLModel trackURLList;
@property (nonatomic) AWEURLModel clickTrackURLList;
@property (nonatomic) NSArray backgroundURLArray;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) q showStyle;
@property (nonatomic) NSString appID;
@property (nonatomic) q linkType;
@property (nonatomic) NSNumber companySubType;
@property (nonatomic) NSString companyLinkName;
@property (nonatomic) NSArray linkIconsLight;
@property (nonatomic) NSArray linkIconsDark;
@property (nonatomic) NSNumber reportShowType;
@property (nonatomic) NSNumber componentID;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString source;
@property (nonatomic) BOOL reportEnabled;
@property (nonatomic) NSString tipsText;
@property (nonatomic) BOOL disliked;
@property (nonatomic) NSString SKANParamsString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSMutableDictionary componentStages;
@property (nonatomic) <AWEAdPreloadComponentContext> componentContext;
- (void)setLogExtra:;
- (id)logExtra;
- (id)componentContext;
- (void)setComponentContext:;
- (id)clickTrackURLList;
- (void)setCreativeID:;
- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:;
- (id)SKANParamsString;
- (void)setWebTitle:;
- (void)setOpenURL:;
- (id)companySubType;
- (void)setCompanySubType:;
- (id)companyLinkName;
- (id)commentTitle;
- (id)linkIconsLight;
- (id)linkIconsDark;
- (long long)showStyle;
- (id)trackURLList;
- (void)setPreloadType:;
- (void)setIronManURL:;
- (id)webTitle;
- (id)reportShowType;
- (id)ironManURL;
- (void)setSKANParamsString:;
- (void)setTrackURLList:;
- (id)avatarIcon;
- (void)setAvatarIcon:;
- (void)setClickTrackURLList:;
- (void)setShowStyle:;
- (id)tipsText;
- (id)commentAvatarIcon;
- (id)featureDesc;
- (id)preloadData;
- (id)componentRefer;
- (id)componentCreativeID;
- (id)componentLogExtra;
- (id)componentGroupID;
- (id)componentExtraID;
- (id)componentStages;
- (void)setComponentStages:;
- (void)setPreloadData:;
- (void)setCommentTitle:;
- (void)setFeatureDesc:;
- (void)setCommentAvatarIcon:;
- (id)backgroundURLArray;
- (void)setBackgroundURLArray:;
- (void)setCompanyLinkName:;
- (void)setLinkIconsLight:;
- (void)setLinkIconsDark:;
- (void)setReportShowType:;
- (void)setTipsText:;
- (BOOL)disliked;
- (void)setDisliked:;
- (long long)linkType;
- (void)setLabel:;
- (id)init;
- (id)componentSeparator;
- (void)setWebURL:;
- (id)appID;
- (id)componentType;
- (id)label;
- (id)type;
- (void)setType:;
- (void)setAppID:;
- (id)buttonText;
- (void).cxx_destruct;
- (id)source;
- (id)title;
- (void)setSource:;
- (BOOL)isPreview;
- (id)webURL;
- (void)setTitle:;
- (void)setLinkType:;
- (id)iconImageName;
- (void)setButtonText:;
- (void)setComponentID:;
- (id)componentID;
- (id)openURL;
- (BOOL)showCloseButton;
- (void)setShowCloseButton:;
- (void)setShowType:;
- (long long)showType;
- (void)setIsPreview:;
- (id)creativeID;
- (BOOL)reportEnabled;
- (void)setReportEnabled:;
- (unsigned long long)preloadType;
+ (id)avatarIconJSONTransformer;
+ (id)commentAvatarIconJSONTransformer;
+ (id)trackURLListJSONTransformer;
+ (id)clickTrackURLListJSONTransformer;
+ (id)showStyleJSONTransformer;
+ (id)backgroundURLArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:;
@end
