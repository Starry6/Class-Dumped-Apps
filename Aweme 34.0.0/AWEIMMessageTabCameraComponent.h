@interface AWEIMMessageTabCameraComponent : AWEIMComponentBase
@property (nonatomic) BOOL hasAddedObserver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)p_removeRecordObserver;
- (void)addRecordObserver;
- (void)handlePhotoRecordFinishedNty:;
- (void)handleVideoRecordFinishedNty:;
- (BOOL)hasAddedObserver;
- (void)setHasAddedObserver:;
@end
