@interface IMPhotoAttachmentStatusChatItem : IMTranscriptChatItem
@property (nonatomic) Q numberOfPhotos;
@property (nonatomic) Q numberOfVideos;
@property (nonatomic) Q numberOfSavedAssets;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)numberOfPhotos;
- (BOOL)isFromMe;
- (unsigned long long)numberOfSavedAssets;
- (unsigned long long)numberOfVideos;
- (id)_initWithItem:numberOfPhotos:numberOfVideos:numberOfSavedAssets:;
- (BOOL)_isEqualToGuid:numberOfPhotos:numberOfVideos:numberOfSavedAssets:;
- (BOOL)wouldBeEqualIfInitializedWithItem:numberOfPhotos:numberOfVideos:numberOfSavedAssets:;
+ (id)_guidForItem:;
@end
