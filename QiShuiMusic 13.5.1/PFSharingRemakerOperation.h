@interface PFSharingRemakerOperation : NSObject
@property (nonatomic) NSString _uuid;
@property (nonatomic) q inputType;
@property (nonatomic) PFVideoSharingOperation _videoOperation;
@property (nonatomic) PFPhotoSharingOperation _imageOperation;
@property (nonatomic) NSURL imageOutputURL;
@property (nonatomic) NSURL videoOutputURL;
- (id)init;
- (void).cxx_destruct;
- (id)_uuid;
- (void)_setUUID:;
- (long long)inputType;
- (id)videoOutputURL;
- (void)_setInputType:;
- (id)imageOutputURL;
- (void)_setImageOutputURL:;
- (void)_setVideoOutputURL:;
- (id)_videoOperation;
- (void)_setVideoOperation:;
- (id)_imageOperation;
- (void)_setImageOperation:;
+ (id)remakerOperationWithInputType:videoURL:imageURL:adjustmentData:;
@end
