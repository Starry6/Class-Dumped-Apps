@interface AWEImageAlbumQualityTracker : NSObject
+ (id)commonTrackInfo;
+ (id)imageAlbumItemsQualityTrackInfoWithImageAlbumData:placeholderCount:;
+ (id)oneTrackInfoFromImageItem:index:;
+ (id)importTrackInfoWithImageItem:;
+ (id)editTrackInfoWithImageItem:;
+ (id)exportTrackInfoWithImageItem:;
+ (void)uploadTrackInfoToTeaWithImageItemModel:extraInfo:;
+ (id)diffInfoWithImportTrack:exportTrack:imageItem:;
+ (void)doAction:ifValue1:isNotEqualToValue2:;
+ (id)imageAlbumItemsQualityTrackJsonStringWithImageAlbumData:placeholderCount:;
+ (void)monitoringImageAlbumPublishQualityWithImageAlbumData:extraInfo:;
@end
