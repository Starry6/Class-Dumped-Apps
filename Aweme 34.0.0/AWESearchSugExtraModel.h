@interface AWESearchSugExtraModel : AWEBaseApiModel
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString avatarURL;
@property (nonatomic) NSString userType;
@property (nonatomic) NSString isRichSug;
@property (nonatomic) NSString certName;
@property (nonatomic) NSString remarkName;
@property (nonatomic) NSString shortId;
@property (nonatomic) NSString relationType;
@property (nonatomic) NSString matchType;
@property (nonatomic) NSString richSugType;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString poiId;
@property (nonatomic) NSString poiLocationRecallLogId;
@property (nonatomic) NSString tagText;
@property (nonatomic) NSString tagType;
@property (nonatomic) AWESearchSugIconTextModel iconText;
@property (nonatomic) AWESearchTagText ecomCouponIcon;
@property (nonatomic) NSString clientServerExtra;
@property (nonatomic) NSString suggestTrackerExtra;
@property (nonatomic) NSString saleType;
@property (nonatomic) AWEURLModel tagIcon;
@property (nonatomic) NSString iconDesc;
@property (nonatomic) AWEURLModel tagIconLong;
@property (nonatomic) BOOL canUseLongTag;
@property (nonatomic) NSArray sugNavigationWords;
@property (nonatomic) NSString specialType;
@property (nonatomic) NSString tailType;
@property (nonatomic) NSString experQueryTag;
@property (nonatomic) NSString searchParamsString;
@property (nonatomic) Q ecomProductSug;
@property (nonatomic) Q ecommerceSugType;
@property (nonatomic) AWEUserAccountCertInfoModel accountCertInfo;
@property (nonatomic) AWESearchSugEntryTypeModel entryType;
@property (nonatomic) AWESearchSugTabOrderModel tabOrder;
@property (nonatomic) AWESearchPOIRichSugModel poiRichSugModel;
@property (nonatomic) NSArray ecomInterveneQuerySpreadIds;
@property (nonatomic) AWESearchEcomLynxSugModel ecomLynxSugModel;
@property (nonatomic) NSString robotLink;
@property (nonatomic) NSDictionary guideImage;
@property (nonatomic) NSDictionary safeImage;
@property (nonatomic) NSString targetTab;
@property (nonatomic) NSString targetTabType;
@property (nonatomic) NSString queryTab;
@property (nonatomic) NSString queryTabExp;
@property (nonatomic) NSString richSugTitle;
@property (nonatomic) NSString richSugSubTitle;
@property (nonatomic) NSString richSugStyle;
@property (nonatomic) NSString richSugHeaderImgURL;
@property (nonatomic) NSString richSugHeaderType;
@property (nonatomic) NSString richSugID;
@property (nonatomic) NSString richSugRouterType;
@property (nonatomic) NSString schemaClientEngineExtra;
- (id)secUid;
- (id)remarkName;
- (id)shortId;
- (id)avatarURL;
- (void)setAvatarURL:;
- (void)setTagText:;
- (id)tagText;
- (id)accountCertInfo;
- (void)setSecUid:;
- (void)setAccountCertInfo:;
- (void)setSaleType:;
- (id)saleType;
- (void)setRelationType:;
- (id)robotLink;
- (void)setRobotLink:;
- (id)targetTab;
- (void)setTargetTab:;
- (id)iconText;
- (void)setIconText:;
- (id)tagIcon;
- (void)setTagIcon:;
- (id)tabOrder;
- (void)setTabOrder:;
- (id)specialType;
- (id)tagIconLong;
- (BOOL)canUseLongTag;
- (id)safeImage;
- (id)queryTab;
- (id)targetTabType;
- (id)richSugType;
- (unsigned long long)ecommerceSugType;
- (id)ecomLynxSugModel;
- (id)tailType;
- (unsigned long long)ecomProductSug;
- (id)ecomInterveneQuerySpreadIds;
- (id)searchParamsString;
- (id)queryTabExp;
- (id)schemaClientEngineExtra;
- (id)sugNavigationWords;
- (void)setRemarkName:;
- (void)setTailType:;
- (void)setShortId:;
- (id)isRichSug;
- (void)setIsRichSug:;
- (void)setPoiLocationRecallLogId:;
- (void)setEcomCouponIcon:;
- (void)setSuggestTrackerExtra:;
- (id)iconDesc;
- (void)setIconDesc:;
- (void)setTagIconLong:;
- (void)setCanUseLongTag:;
- (void)setSugNavigationWords:;
- (void)setSpecialType:;
- (void)setExperQueryTag:;
- (void)setSearchParamsString:;
- (void)setEcomProductSug:;
- (void)setEcommerceSugType:;
- (void)setPoiRichSugModel:;
- (void)setEcomInterveneQuerySpreadIds:;
- (void)setEcomLynxSugModel:;
- (void)setSafeImage:;
- (void)setTargetTabType:;
- (void)setQueryTab:;
- (void)setQueryTabExp:;
- (void)setRichSugTitle:;
- (id)richSugSubTitle;
- (void)setRichSugSubTitle:;
- (void)setRichSugStyle:;
- (void)setRichSugHeaderImgURL:;
- (void)setRichSugHeaderType:;
- (id)richSugID;
- (void)setRichSugID:;
- (void)setRichSugRouterType:;
- (void)setSchemaClientEngineExtra:;
- (id)clientServerExtra;
- (void)setClientServerExtra:;
- (void)setRichSugType:;
- (id)richSugHeaderType;
- (id)richSugHeaderImgURL;
- (id)richSugTitle;
- (id)poiRichSugModel;
- (id)ecomCouponIcon;
- (id)richSugStyle;
- (id)poiLocationRecallLogId;
- (id)richSugRouterType;
- (id)experQueryTag;
- (id)suggestTrackerExtra;
- (id)tagType;
- (id)entryType;
- (id)userId;
- (id)userType;
- (void)setNickName:;
- (void).cxx_destruct;
- (void)setUserId:;
- (id)nickName;
- (id)matchType;
- (id)poiId;
- (void)setEntryType:;
- (void)setMatchType:;
- (void)setPoiId:;
- (id)relationType;
- (void)setTagType:;
- (id)guideImage;
- (void)setGuideImage:;
- (id)certName;
- (void)setCertName:;
- (void)setUserType:;
+ (id)tagIconJSONTransformer;
+ (id)accountCertInfoJSONTransformer;
+ (id)poiRichSugModelJSONTransformer;
+ (id)ecomLynxSugModelJSONTransformer;
+ (id)sugNavigationWordsJSONTransformer;
+ (id)entryTypeJSONTransformer;
+ (id)tabOrderJSONTransformer;
+ (id)iconTextJSONTransformer;
+ (id)ecomCouponIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
