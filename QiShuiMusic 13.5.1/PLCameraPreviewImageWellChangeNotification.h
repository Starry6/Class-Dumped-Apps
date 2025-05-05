@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification
@property (nonatomic) UIImage image;
@property (nonatomic) NSString assetUUID;
- (id)init;
- (id)userInfo;
- (id)assetUUID;
- (void).cxx_destruct;
- (id)object;
- (id)description;
- (id)_init;
- (id)name;
- (id)image;
+ (id)notification;
@end
