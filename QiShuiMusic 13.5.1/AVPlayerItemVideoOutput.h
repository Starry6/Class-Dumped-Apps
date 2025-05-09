@interface AVPlayerItemVideoOutput : AVPlayerItemOutput
@property (nonatomic) <AVPlayerItemOutputPullDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
- (id)init;
- (void)dealloc;
- (id)delegateQueue;
- (id)initWithPixelBufferAttributes:;
- (id)delegate;
- (void)setDelegate:queue:;
- (BOOL)_attachToPlayerItem:;
- (BOOL)hasNewPixelBufferForItemTime:;
- (id)copyPixelBufferForItemTime:itemTimeForDisplay:;
- (void)_detachFromPlayerItem;
- (BOOL)setUpWithOutputSettings:outputSettingsArePixelBufferAttributes:withExceptionReason:;
- (id)_copyPixelBufferForItemTimeWithOptions:itemTimeForDisplay:options:;
- (id)_visualContext;
- (void)_dispatchOutputSequenceWasFlushed;
- (void)setSuppressesPlayerRendering:;
- (BOOL)suppressesPlayerRendering;
- (void)_setTimebase:;
- (long long)clientStateOnRequestedMediaDataChangeNotification;
- (id)initWithOutputSettings:;
- (id)_pixelBufferAttributes;
- (id)earliestAvailablePixelBufferItemTime;
- (void)requestNotificationOfMediaDataChangeWithAdvanceInterval:;
- (void)requestNotificationOfMediaDataChangeAsSoonAsPossible;
- (id)copyPixelBufferForItemTime:remove:itemTimeForDisplay:;
- (void)_respondToPlayerItemFormatDescriptionsChange;
- (void)_setTagBuffersWithConversionInformation;
- (void)_stopObservingTimebaseNotificationsForTimebase:;
- (void)_startObservingTimebaseNotificationsForTimebase:;
- (void)_dispatchOutputMediaDataWillChange;
@end
