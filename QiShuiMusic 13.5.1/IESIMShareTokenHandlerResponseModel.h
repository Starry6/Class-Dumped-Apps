@interface IESIMShareTokenHandlerResponseModel : IESIMBaseApiModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSNumber schemaType;
@property (nonatomic) NSString shareScene;
@property (nonatomic) NSDictionary activityInfo;
@property (nonatomic) NSString popupCover;
@property (nonatomic) IESIMShareSchemaDetailModel schemaDetail;
@property (nonatomic) NSString shareUserID;
@property (nonatomic) NSString shareUserName;
@property (nonatomic) q shareUserIID;
@property (nonatomic) NSNumber shareUserDid;
@property (nonatomic) IESIMURLModel shareUserAvatar;
@property (nonatomic) NSString command;
@property (nonatomic) NSString relationFrom;
@property (nonatomic) NSString shareSDK;
@property (nonatomic) NSString subheadTemplate;
@property (nonatomic) NSString secUserId;
@property (nonatomic) NSDictionary extraDict;
@property (nonatomic) BOOL hidePopup;
@property (nonatomic) NSString confirmButtonText;
- (void)setShareUserID:;
- (id)shareUserAvatar;
- (id)subheadTemplate;
- (id)extraDict;
- (BOOL)hidePopup;
- (id)popupCover;
- (id)relationFrom;
- (id)schemaDetail;
- (id)secUserId;
- (void)setActivityInfo:;
- (void)setConfirmButtonText:;
- (void)setExtraDict:;
- (void)setHidePopup:;
- (void)setPopupCover:;
- (void)setRelationFrom:;
- (void)setSchemaDetail:;
- (void)setSchemaType:;
- (void)setSecUserId:;
- (void)setShareSDK:;
- (void)setShareScene:;
- (void)setShareUserAvatar:;
- (void)setShareUserDid:;
- (void)setShareUserIID:;
- (void)setShareUserName:;
- (void)setSubheadTemplate:;
- (id)shareSDK;
- (id)shareScene;
- (id)shareUserDid;
- (id)shareUserID;
- (long long)shareUserIID;
- (id)shareUserName;
- (id)schema;
- (void)setSchema:;
- (id)command;
- (void).cxx_destruct;
- (id)schemaType;
- (void)setCommand:;
- (id)confirmButtonText;
- (id)activityInfo;
+ (id)activityInfoJSONTransformer;
+ (id)extraDictJSONTransformer;
+ (id)schemaDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
