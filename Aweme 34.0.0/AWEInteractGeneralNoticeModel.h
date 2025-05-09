@interface AWEInteractGeneralNoticeModel : AWEBaseApiModel
@property (nonatomic) NSString content;
@property (nonatomic) NSString desc;
@property (nonatomic) AWEInteractModularizationTextModel title;
@property (nonatomic) NSString author;
@property (nonatomic) q subType;
@property (nonatomic) NSArray fromUser;
@property (nonatomic) AWEURLModel coverImageUrl;
@property (nonatomic) AWEURLModel avatarImageUrl;
@property (nonatomic) AWEURLModel typeImageUrl;
@property (nonatomic) NSString labelText;
@property (nonatomic) q labelType;
@property (nonatomic) NSString labelTrack;
@property (nonatomic) NSArray fansTagArray;
@property (nonatomic) q avatarType;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSString avatarSchema;
@property (nonatomic) NSString cellSchema;
@property (nonatomic) NSString coverSchema;
@property (nonatomic) NSString normalParams;
@property (nonatomic) double contentH;
@property (nonatomic) NSMutableAttributedString displayTitle;
@property (nonatomic) double descAndTimestampH;
@property (nonatomic) NSString descAndTime;
@property (nonatomic) AWEInteractModularizationNoticeTrackerParams trackerParams;
@property (nonatomic) Q noticeDisableType;
@property (nonatomic) Q timePeriod;
@property (nonatomic) NSString noticeDisableText;
@property (nonatomic) NSString dynamicSchema;
@property (nonatomic) NSString uniqType;
@property (nonatomic) AWEInteractModularizationButtonModel button;
@property (nonatomic) q coverType;
@property (nonatomic) q isDeteled;
@property (nonatomic) q contentOffset;
@property (nonatomic) q liteInteraction;
@property (nonatomic) AWEInteractThanksDiggModel thankDiggInfoModel;
@property (nonatomic) AWECommentNotificationModel comment;
@property (nonatomic) AWEInteractModularizationActionInfoModel actionInfoModel;
@property (nonatomic) AWEInteractModularizationHotsoonFlameModel hotsoonFlameModel;
@property (nonatomic) AWEInteractModularizationOptionInfoModel optionInfoModel;
@property (nonatomic) AWENoticeLiteInteractionInfoModel liteInteractionInfo;
@property (nonatomic) NSString supplement;
@property (nonatomic) NSArray actionBarModelArray;
@property (nonatomic) NSArray imageUrlList;
@property (nonatomic) AWEInteractAdditionalInfoModel additionalInfo;
@property (nonatomic) NSArray contentTextFormats;
@property (nonatomic) AWENoticeContentResourceModel contentResource;
@property (nonatomic) AWENoticeImageUrlStructModel imageUrlsStruct;
- (id)aweme;
- (void)setAweme:;
- (id)imageUrlList;
- (void)setImageUrlList:;
- (void)setTrackerParams:;
- (id)hotsoonFlameModel;
- (void)setLabelTrack:;
- (id)actionBarModelArray;
- (id)trackerParams;
- (id)actionInfoModel;
- (long long)isDeteled;
- (id)contentTextFormats;
- (id)cellSchema;
- (id)uniqType;
- (id)coverImageUrl;
- (void)setFromUser:;
- (id)imageUrlsStruct;
- (long long)liteInteraction;
- (id)labelTrack;
- (id)typeImageUrl;
- (id)avatarImageUrl;
- (id)descAndTime;
- (long long)coverType;
- (id)contentResource;
- (unsigned long long)noticeDisableType;
- (id)coverSchema;
- (id)avatarSchema;
- (id)fansTagArray;
- (void)setFansTagArray:;
- (void)setCoverImageUrl:;
- (void)setCoverType:;
- (id)normalParams;
- (void)setNormalParams:;
- (id)liteInteractionInfo;
- (void)setSupplement:;
- (void)setAvatarSchema:;
- (void)setCellSchema:;
- (void)setCoverSchema:;
- (void)setNoticeDisableType:;
- (id)noticeDisableText;
- (void)setNoticeDisableText:;
- (id)dynamicSchema;
- (void)setDynamicSchema:;
- (void)setUniqType:;
- (void)setActionInfoModel:;
- (void)setLiteInteraction:;
- (void)setDescAndTime:;
- (void)setContentH:;
- (void)setDescAndTimestampH:;
- (void)setActionBarModelArray:;
- (double)contentH;
- (void)setAvatarImageUrl:;
- (void)setTypeImageUrl:;
- (double)descAndTimestampH;
- (void)setIsDeteled:;
- (id)thankDiggInfoModel;
- (void)setThankDiggInfoModel:;
- (void)setHotsoonFlameModel:;
- (id)optionInfoModel;
- (void)setOptionInfoModel:;
- (void)setLiteInteractionInfo:;
- (void)setContentTextFormats:;
- (void)setContentResource:;
- (void)setImageUrlsStruct:;
- (void)setAdditionalInfo:;
- (id)additionalInfo;
- (id)labelText;
- (id)author;
- (void)setContentOffset:;
- (id)content;
- (id)comment;
- (long long)contentOffset;
- (long long)labelType;
- (void)setLabelType:;
- (void)setButton:;
- (id)supplement;
- (void)setDesc:;
- (id)desc;
- (long long)subType;
- (void)setContent:;
- (void)setLabelText:;
- (void).cxx_destruct;
- (id)title;
- (void)setAuthor:;
- (void)setSubType:;
- (void)setTitle:;
- (id)displayTitle;
- (id)button;
- (void)setComment:;
- (void)setDisplayTitle:;
- (long long)avatarType;
- (void)setAvatarType:;
- (void)setTimePeriod:;
- (unsigned long long)timePeriod;
- (id)fromUser;
+ (id)awemeJSONTransformer;
+ (id)fansTagArrayJSONTransformer;
+ (id)commentJSONTransformer;
+ (id)buttonJSONTransformer;
+ (id)additionalInfoJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)actionBarModelArrayJSONTransformer;
+ (id)coverImageUrlJSONTransformer;
+ (id)avatarImageUrlJSONTransformer;
+ (id)typeImageUrlJSONTransformer;
+ (id)actionInfoModelJSONTransformer;
+ (id)hotsoonFlameModelJSONTransformer;
+ (id)imageUrlListJSONTransformer;
+ (id)thankDiggInfoModelJSONTransformer;
+ (id)optionInfoModelJSONTransformer;
+ (id)liteInteractionInfoJSONTransformer;
+ (id)contentTextFormatsJSONTransformer;
+ (id)contentResourceJSONTransformer;
+ (id)imageUrlsStructJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
