@interface PLCloudStreamShareJob : PLCloudSharingJob
@property (nonatomic) NSArray mediaSources;
@property (nonatomic) NSString albumCloudGUID;
@property (nonatomic) NSString albumName;
@property (nonatomic) NSString commentText;
@property (nonatomic) NSArray recipientsInfo;
- (id)albumName;
- (void)setAlbumName:;
- (id)initFromXPCObject:libraryServicesManager:;
- (void)run;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (void).cxx_destruct;
- (id)description;
- (void)encodeToXPCObject:;
- (id)commentText;
- (void)setCommentText:;
- (void)addInfosForRecipients:;
- (BOOL)shouldArchiveXPCToDisk;
- (void)executeDaemonOperation;
- (id)mediaSources;
- (void)setMediaSources:;
- (id)albumCloudGUID;
- (void)setAlbumCloudGUID:;
- (id)recipientsInfo;
- (void)setRecipientsInfo:;
+ (void)publishMediaFromSources:toSharedAlbum:withCommentText:;
+ (void)publishMediaFromSources:toNewSharedAlbumWithName:withCommentText:recipients:;
@end
