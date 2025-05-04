@interface AWEACCSaveAlbumImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateVideoDurationIfNeeded:;
- (void)updateLivePhotoDurationIfNeeded:configuration:;
- (void)hideShareHintIfNeeded:;
- (double)p_calculateMaxTextReadAudioDurationWithModel:;
- (BOOL)hasAppliedTemplate:;
- (void)createAsyncHandleWithFromID:editService:configuration:updateSourceModel:didReady:callback:;
- (void)fetchPublishModelWithID:completion:;
@end
