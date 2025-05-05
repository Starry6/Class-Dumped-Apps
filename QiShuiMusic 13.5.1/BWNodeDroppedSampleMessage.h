@interface BWNodeDroppedSampleMessage : BWNodeMessage
@property (nonatomic) BWDroppedSample droppedSample;
- (void)dealloc;
- (id)droppedSample;
+ (id)newMessageWithDroppedSample:;
@end
