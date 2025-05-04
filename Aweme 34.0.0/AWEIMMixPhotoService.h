@interface AWEIMMixPhotoService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startMixPhotoWithStickerID:maxMember:stickerCoverURL:isLora:;
- (void)startMixPhotoWithEffectInfo:context:;
- (void)forwardLoraMixPhotoWithLoraTaskID:effectInfo:context:;
+ (id)sharedInstance;
@end
