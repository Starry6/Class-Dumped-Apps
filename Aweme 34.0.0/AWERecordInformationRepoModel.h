@interface AWERecordInformationRepoModel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray recordFragmentInfo;
@property (nonatomic) NSMutableArray fragmentInfo;
@property (nonatomic) AWEPictureToVideoInfo pictureToVideoInfo;
@property (nonatomic) BOOL isCommerceDataInToolsLine;
@property (nonatomic) q delay;
@property (nonatomic) double micVolumePeak;
@property (nonatomic) double micVolumeLoudness;
@property (nonatomic) NSArray toolBarAllowList;
@property (nonatomic) NSArray toolBarBlockList;
@property (nonatomic) BOOL shouldCheckIgnoreUploadProp;
@property (nonatomic) <ACCRepoDataContext> dataContext;
@property (nonatomic) <ACCWorkspaceReader> workspaceReader;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <ACCPublishRepository> repoDeprecated;
- (id)dataContext;
- (id)repoDeprecated;
- (void)setRepoDeprecated:;
- (void)setDataContext:;
- (id)acc_publishRequestParams:;
- (id)initWithDraft:;
- (void)saveWithDraft:;
- (id)fragmentInfo;
- (id)pictureToVideoInfo;
- (BOOL)shouldForbidCommerce;
- (BOOL)shouldForbidCommerce:;
- (BOOL)isCommerceProp;
- (id)workspaceReader;
- (void)setWorkspaceReader:;
- (id)originalFrameNamesArray;
- (id)toolBarBlockList;
- (void)draftWillBeSavedWithID:;
- (void)modelDidRetrievedFromDraftWithID:;
- (void)setToolBarAllowList:;
- (void)setToolBarBlockList:;
- (double)micVolumeLoudness;
- (double)micVolumePeak;
- (id)stickerTextArray;
- (id)stickerTextString;
- (id)beautifyTrackInfoDic;
- (BOOL)shouldCheckIgnoreUploadProp;
- (BOOL)isCommerceDataInToolsLine;
- (void)setShouldCheckIgnoreUploadProp:;
- (void)setPictureToVideoInfo:;
- (void)setMicVolumeLoudness:;
- (void)setMicVolumePeak:;
- (void)setIsCommerceDataInToolsLine:;
- (id)generateThumbnailsFloader;
- (id)generateThumbnailsFloader;
- (id)saveImage:index:draftFolder:;
- (id)saveImage:index:draftFolder:;
- (void)updateVideoFragmentInfo;
- (id)delayRange;
- (BOOL)isCommerceStickerOrMV;
- (BOOL)isStoryAllowed;
- (id)p_providerString:;
- (id)textExportHandlers:;
- (id)p_jsonStringEncoded:error:;
- (void)trackForTextSticker:error:;
- (void)setRecordFragmentInfo:;
- (id)recordFragmentInfo;
- (id)toolBarAllowList;
- (void)updateFragmentInfo:;
- (void)setDelay:;
- (long long)delay;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)hasStickers;
+ (id)repo_dataProtocol;
@end
