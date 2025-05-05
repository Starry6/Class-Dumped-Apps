@interface AVCScreenCaptureConfiguration : NSObject
@property (nonatomic) I height;
@property (nonatomic) I width;
@property (nonatomic) I frameRate;
@property (nonatomic) BOOL isWindowed;
@property (nonatomic) I screenCaptureDisplayID;
@property (nonatomic) I selectiveSharingPort;
@property (nonatomic) NSString selectiveScreenUUID;
- (void)setFrameRate:;
- (unsigned int)frameRate;
- (void)dealloc;
- (void)setWidth:;
- (unsigned int)height;
- (unsigned int)width;
- (void)setHeight:;
- (BOOL)isWindowed;
- (id)initWithHeight:width:framerate:screenCaptureDisplayID:;
- (void)setIsWindowed:;
- (unsigned int)screenCaptureDisplayID;
- (void)setScreenCaptureDisplayID:;
- (unsigned int)selectiveSharingPort;
- (void)setSelectiveSharingPort:;
- (id)selectiveScreenUUID;
- (void)setSelectiveScreenUUID:;
@end
