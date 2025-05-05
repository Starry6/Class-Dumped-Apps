@interface VCIDRScheduler : NSObject
@property (nonatomic) I basePeriodMs;
@property (nonatomic) I captureFramerate;
- (void)dealloc;
- (id)description;
- (id)initWithStreams:captureFramerate:;
- (void)computeBasePeriod;
- (BOOL)computeCaptureFramerate;
- (void)computeGroupList;
- (void)computeSchedulerItemList;
- (void)computeSchedulerItemsBudget;
- (void)placeRemainingItems:placedItems:leftItem:rightItem:;
- (void)computeSchedulerItemsPosition;
- (void)computeStreamsIDRPosition;
- (void)realignStreams;
- (unsigned int)basePeriodMs;
- (unsigned int)captureFramerate;
+ (unsigned int)computeGcdForX:y:;
@end
