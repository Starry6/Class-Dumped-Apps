@interface AWERepoSaveToAlbumModel : NSObject
@property (nonatomic) NSArray imageSizeMergedArray;
@property (nonatomic) BOOL saveImageAlbumAsVideo;
@property (nonatomic) BOOL isSaveToAlbumSourceClip;
@property (nonatomic) BOOL editInEditPage;
@property (nonatomic) q picCount;
@property (nonatomic) double videoDuration;
@property (nonatomic) double videoRate;
@property (nonatomic) BOOL isDraftResume;
@property (nonatomic) BOOL enableSaveDraft;
@property (nonatomic) BOOL saveNoBlock;
@property (nonatomic) BOOL isAutoSave;
@property (nonatomic) BOOL canRemoveBlackEdge;
@property (nonatomic) BOOL disableDownloadTrackEvent;
@property (nonatomic) BOOL onlySaveAlbum;
@property (nonatomic) double clickTime;
@property (nonatomic) q source;
@property (nonatomic) NSString downloadActionTypeName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)picCount;
- (void)setClickTime:;
- (double)clickTime;
- (void)setSaveImageAlbumAsVideo:;
- (void)setIsSaveToAlbumSourceClip:;
- (void)clearImageSizeMergedArray;
- (void)addImageSizeMerged:;
- (BOOL)saveImageAlbumAsVideo;
- (BOOL)isSaveToAlbumSourceClip;
- (BOOL)disableDownloadTrackEvent;
- (BOOL)canRemoveBlackEdge;
- (BOOL)isAutoSave;
- (BOOL)saveNoBlock;
- (BOOL)editInEditPage;
- (BOOL)enableSaveDraft;
- (BOOL)isDraftResume;
- (double)videoRate;
- (id)imageSizeMergedArray;
- (BOOL)onlySaveAlbum;
- (id)downloadActionTypeName;
- (void)setDisableDownloadTrackEvent:;
- (void)setOnlySaveAlbum:;
- (void)setEnableSaveDraft:;
- (void)setIsAutoSave:;
- (void)setPicCount:;
- (void)setDownloadActionTypeName:;
- (void)setEditInEditPage:;
- (void)setIsDraftResume:;
- (void)setVideoRate:;
- (void)setSaveNoBlock:;
- (void)setCanRemoveBlackEdge:;
- (void)setImageSizeMergedArray:;
- (void)updateImageSizeMergedArray:;
- (id)init;
- (void).cxx_destruct;
- (double)videoDuration;
- (long long)source;
- (void)setSource:;
- (id)copyWithZone:;
- (void)setVideoDuration:;
+ (id)repo_dataProtocol;
+ (long long)repo_scope;
@end
