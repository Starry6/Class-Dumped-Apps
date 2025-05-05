@interface PKPencilTouchDetection : NSObject
@property (nonatomic) <PKPencilTouchDetectionDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)pencilType:hasRecentlyBeenUsedWithCompletionHandler:;
- (void)didUpdateWithUserInfo:;
@end
