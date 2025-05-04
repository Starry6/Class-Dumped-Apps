@interface AWEVideoRouterDuetService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createDuetVideoWithAweme:trackInfo:;
- (id)startDuetWithAweme:showGrant:withInfo:publishModel:inputData:;
- (id)startDuetWithAweme:showGrant:withInfo:publishModel:challengeModel:inputData:;
- (id)startDuetWithAweme:showGrant:withInfo:publishModel:challengeModel:videoReplyModel:inputData:;
- (id)startDuetWithAweme:stickerID:publishModel:challengeModel:inputData:;
- (id)coverImageWithAsset:time:radians:;
+ (void)getStickersFromAweme:sticker:isCommercialDuetTask:stickerDownloadCompletion:normalCompletion:;
+ (void)dealImageAlbumCurrentIndexWithAweme:duetResourceURI:;
+ (void)downloadImageAlbumPictureFromAweme:selectImageIndex:imageModel:mediaType:completion:;
+ (id)destinationURLForURI:mediaType:;
+ (void)getLocalImageAlbumFileFromAweme:completion:;
+ (void)getLocalVideoFromAweme:completion:;
+ (void)showStickerFetchError:;
@end
