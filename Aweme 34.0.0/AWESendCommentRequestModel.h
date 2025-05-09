@interface AWESendCommentRequestModel : NSObject
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSString generalItemID;
@property (nonatomic) NSString serviceID;
@property (nonatomic) NSString content;
@property (nonatomic) NSString replyCommentID;
@property (nonatomic) NSString replySubCommentID;
@property (nonatomic) NSString replyCommentIDs;
@property (nonatomic) NSArray textExtraArray;
@property (nonatomic) AWEIMStickerModel sticker;
@property (nonatomic) NSString imageUriList;
@property (nonatomic) NSString imageHeights;
@property (nonatomic) NSString imageWidths;
@property (nonatomic) NSString imageFormats;
@property (nonatomic) NSString imageSources;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString previousPage;
@property (nonatomic) q channelID;
@property (nonatomic) BOOL isFamiliar;
@property (nonatomic) BOOL isFromPaste;
@property (nonatomic) NSString lastCopyCommentID;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSString currentCommentCount;
@property (nonatomic) BOOL isNoNeedUserInfo;
@property (nonatomic) NSString replyCommentToken;
@property (nonatomic) NSString itemToken;
@property (nonatomic) NSString liveIndexes;
@property (nonatomic) NSString vids;
@property (nonatomic) AWECommentAudioModel audioModel;
@property (nonatomic) NSArray mediaModels;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (void)setExtraParams:;
- (id)enterFrom;
- (id)audioModel;
- (id)extraParams;
- (void)setAudioModel:;
- (id)replySubCommentID;
- (void)setAwemeID:;
- (void)setItemToken:;
- (void)setGeneralItemID:;
- (id)vids;
- (void)setVids:;
- (id)awemeID;
- (void)setReplySubCommentID:;
- (void)setReplyCommentID:;
- (void)setMediaModels:;
- (id)replyCommentID;
- (id)generalItemID;
- (id)generateRequestParamsDict:;
- (id)initWithPublishParameterModel:;
- (void)setImageWidths:;
- (id)imageWidths;
- (void)setLiveIndexes:;
- (void)setImageSources:;
- (void)setImageFormats:;
- (void)setImageHeights:;
- (void)setImageUriList:;
- (id)mediaModels;
- (void)setReplyCommentToken:;
- (void)setIsFromPaste:;
- (void)setLastCopyCommentID:;
- (void)setIsNoNeedUserInfo:;
- (void)setCurrentCommentCount:;
- (void)setTextExtraArray:;
- (void)setReplyCommentIDs:;
- (BOOL)isFamiliar;
- (void)setIsFamiliar:;
- (id)itemToken;
- (id)textExtraArray;
- (BOOL)isFromPaste;
- (id)lastCopyCommentID;
- (id)currentCommentCount;
- (BOOL)isNoNeedUserInfo;
- (id)replyCommentToken;
- (id)replyCommentIDs;
- (id)generateGeneralItemParams;
- (id)imageUriList;
- (id)imageHeights;
- (id)imageFormats;
- (id)imageSources;
- (id)liveIndexes;
- (id)content;
- (void)setChannelID:;
- (void)setServiceID:;
- (long long)channelID;
- (id)serviceID;
- (void)setContent:;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
- (id)sticker;
- (void)setSticker:;
@end
