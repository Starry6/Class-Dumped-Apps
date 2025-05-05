@interface IESLiveSaaSReturnBackCameraStore : NSObject
@property (nonatomic) NSNumber cameraID;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) NSArray vsAvatarURLs;
@property (nonatomic) NSString backCameraTitle;
@property (nonatomic) HTSEventContext eventContext;
- (id)backCameraTitle;
- (void)setBackCameraTitle:;
- (void)setCameraID:;
- (void)setEventContext:;
- (void)setVsAvatarURLs:;
- (id)vsAvatarURLs;
- (void).cxx_destruct;
- (id)eventContext;
- (id)room;
- (void)setRoom:;
- (id)roomID;
- (void)setRoomID:;
- (id)cameraID;
@end
