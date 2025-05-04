@interface AWECameraManager : NSObject
@property (nonatomic) NSPointerArray recorderArray;
@property (nonatomic) NSMutableSet taskIdSet;
@property (nonatomic) BOOL shouldPreventNewRecordController;
- (BOOL)shouldPreventNewRecordController;
- (id)allRecorders;
- (void)addRecorder:;
- (void)setShouldPreventNewRecordController:;
- (id)recorderArray;
- (id)taskIdSet;
- (void)setTaskIdSet:;
- (void)setRecorderArray:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
