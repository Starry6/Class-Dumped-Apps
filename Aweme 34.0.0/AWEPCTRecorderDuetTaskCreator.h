@interface AWEPCTRecorderDuetTaskCreator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)configPublishModel:;
+ (id)createTaskWithContext:;
+ (id)group:guardRemote:completion:;
+ (void)group:localVideo:completion:;
+ (void)group:forStickers:;
+ (void)configRecordInputData:;
+ (void)configShootTrack:;
+ (void)dealImageAlbumCurrentIndexWithAweme:duetResourceURI:;
+ (void)downloadImageAlbumPictureFromAweme:selectImageIndex:imageModel:mediaType:completion:;
+ (id)destinationURLForURI:mediaType:;
@end
