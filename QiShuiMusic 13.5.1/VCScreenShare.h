@interface VCScreenShare : NSObject
@property (nonatomic) NSNumber clientPID;
@property (nonatomic) NSString selectiveScreenUUID;
@property (nonatomic) I height;
@property (nonatomic) I width;
@property (nonatomic) I frameRate;
@property (nonatomic) I screenCaptureDisplayID;
@property (nonatomic) BOOL isWindowed;
@property (nonatomic) I selectiveSharingPort;
- (void)setClientPID:;
- (unsigned int)frameRate;
- (void)dealloc;
- (id)clientPID;
- (unsigned int)height;
- (unsigned int)width;
- (BOOL)isWindowed;
- (unsigned int)screenCaptureDisplayID;
- (unsigned int)selectiveSharingPort;
- (id)selectiveScreenUUID;
- (void)setSelectiveScreenUUID:;
- (id)initWithConfig:pid:;
- (void)updateScreenShareWith:pid:;
- (void)setConfig:pid:;
@end
