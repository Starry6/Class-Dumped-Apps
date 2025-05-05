@interface FigVideoLayer : FigBaseCALayer
- (id)actionForKey:;
- (id)init;
- (void)dealloc;
- (BOOL)isVideoLayerBeingServiced;
- (id)initWithLayer:;
- (void)layerDidBecomeVisible:;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (id)layerDisplayName;
- (void)notificationBarrier;
+ (id)defaultActionForKey:;
@end
