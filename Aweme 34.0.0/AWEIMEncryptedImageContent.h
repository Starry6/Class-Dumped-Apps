@interface AWEIMEncryptedImageContent : AWEIMMessageContent
@property (nonatomic) NSString resObjectID;
@property (nonatomic) NSString resSecretKey;
@property (nonatomic) NSString resMd5;
@property (nonatomic) AWEIMImageLivePhotoModel livePhotoVideoModel;
@property (nonatomic) BOOL isLongOrWidePic;
@property (nonatomic) NSArray resOriginUrlList;
@property (nonatomic) NSArray resThumbUrlList;
@property (nonatomic) NSArray resMediumUrlList;
@property (nonatomic) NSArray resLargeUrlList;
@property (nonatomic) NSArray resLongUrlList;
@property (nonatomic) NSArray resStillUrlList;
@property (nonatomic) q resFileSize;
@property (nonatomic) q coverWidth;
@property (nonatomic) q coverHeight;
@property (nonatomic) {CGSize=dd} originCoverSize;
@property (nonatomic) double compressDuration;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) NSString checkPic;
@property (nonatomic) NSString inlinePic;
@property (nonatomic) NSString inlineSign;
@property (nonatomic) q duetType;
@property (nonatomic) q duetLayout;
@property (nonatomic) q duetRole;
@property (nonatomic) q effectType;
@property (nonatomic) q validRange;
@property (nonatomic) NSString md5;
@property (nonatomic) BOOL fromGallery;
@property (nonatomic) BOOL useOriginImage;
@property (nonatomic) q postType;
@property (nonatomic) NSArray checkTexts;
@property (nonatomic) BOOL massMsg;
@property (nonatomic) q aweType;
@property (nonatomic) AWEURLModel resourceUrl;
@property (nonatomic) AWEURLModel mediumResourceUrl;
@property (nonatomic) AWEURLModel largeResourceUrl;
@property (nonatomic) AWEURLModel posterResourceUrl;
@property (nonatomic) AWEURLModel longResourceUrl;
@property (nonatomic) NSString sourceTitle;
@property (nonatomic) AWEURLModel sourceIcon;
@property (nonatomic) NSString packageName;
@property (nonatomic) NSString clientKey;
@property (nonatomic) NSString itemId;
@property (nonatomic) q exchangeRequestSeverMessageId;
@property (nonatomic) q followBatchID;
@property (nonatomic) BOOL isLongPicture;
@property (nonatomic) q creatType;
@property (nonatomic) double createTimestamp;
@property (nonatomic) BOOL isAIGC;
- (id)poiID;
- (id)poiName;
- (long long)aweType;
- (long long)duetLayout;
- (void)setDuetLayout:;
- (long long)coverWidth;
- (void)setCoverWidth:;
- (long long)coverHeight;
- (void)setCoverHeight:;
- (id)poiAddress;
- (void)setPoiAddress:;
- (void)setPoiName:;
- (void)setPoiID:;
- (long long)postType;
- (void)setAweType:;
- (long long)exchangeRequestSeverMessageId;
- (void)setExchangeRequestSeverMessageId:;
- (id)posterResourceUrl;
- (id)inlinePic;
- (BOOL)useOriginImage;
- (long long)resFileSize;
- (id)largeResourceUrl;
- (id)resMd5;
- (id)livePhotoVideoModel;
- (void)setResObjectID:;
- (void)setResSecretKey:;
- (void)setResMd5:;
- (void)setResFileSize:;
- (BOOL)fromGallery;
- (long long)followBatchID;
- (void)setFollowBatchID:;
- (long long)creatType;
- (BOOL)isAIGC;
- (void)setCompressDuration:;
- (void)setCreateTimestamp:;
- (id)awemePoiID;
- (void)setAwemePoiID:;
- (long long)duetType;
- (long long)duetRole;
- (void)setSourceIcon:;
- (void)setSourceTitle:;
- (void)updateMessageContentWithAttachmentMD5:fileType:;
- (void)updateMessageContentWithUploadedFileResponse:fileType:;
- (id)resObjectID;
- (id)resOriginUrlList;
- (id)resMediumUrlList;
- (id)resLargeUrlList;
- (id)resLongUrlList;
- (id)resStillUrlList;
- (id)resSecretKey;
- (id)resThumbUrlList;
- (id)checkPic;
- (BOOL)isLongOrWidePic;
- (BOOL)massMsg;
- (id)checkTexts;
- (id)inlineSign;
- (double)createTimestamp;
- (void)setLivePhotoVideoModel:;
- (void)setCheckPic:;
- (void)setResOriginUrlList:;
- (void)setResThumbUrlList:;
- (void)setResMediumUrlList:;
- (void)setResLargeUrlList:;
- (void)setResLongUrlList:;
- (void)setResStillUrlList:;
- (void)setMassMsg:;
- (void)setCheckTexts:;
- (void)setPostType:;
- (void)setFromGallery:;
- (void)setIsLongOrWidePic:;
- (void)setUseOriginImage:;
- (void)setDuetRole:;
- (void)setDuetType:;
- (void)setCreatType:;
- (void)setInlinePic:;
- (void)setInlineSign:;
- (void)setIsAIGC:;
- (id)mediumResourceUrl;
- (id)longResourceUrl;
- (void)updateMessageContentWithUploadedFileSize:fileType:;
- (BOOL)isLongPicture;
- (id)originCoverSize;
- (void)setOriginCoverSize:;
- (double)compressDuration;
- (id)clientKey;
- (void)setLatitude:;
- (double)latitude;
- (void)setLongitude:;
- (id)packageName;
- (double)longitude;
- (void)setClientKey:;
- (void).cxx_destruct;
- (BOOL)isLivePhoto;
- (long long)validRange;
- (id)initWithDictionary:;
- (long long)effectType;
- (id)copyWithZone:;
- (void)setEffectType:;
- (void)setMd5:;
- (id)md5;
- (id)resourceUrl;
- (id)contentDictionary;
- (id)itemId;
- (id)sourceIcon;
- (void)setPackageName:;
- (void)setValidRange:;
- (id)sourceTitle;
- (void)setItemId:;
@end
