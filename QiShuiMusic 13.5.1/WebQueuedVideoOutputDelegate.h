@interface WebQueuedVideoOutputDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)initWithParent:;
- (id).cxx_construct;
- (void)outputSequenceWasFlushed:;
- (void)outputMediaDataWillChange:;
@end
