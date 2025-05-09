@interface CAEAGLLayer : CALayer
@property (nonatomic) ^{_EAGLNativeWindowObject=iI^?^?^?^?^?^?^?} nativeWindow;
@property (nonatomic) BOOL asynchronous;
@property (nonatomic) Q maximumDrawableCount;
@property (nonatomic) BOOL lowLatency;
@property (nonatomic) double inputTime;
@property (nonatomic) double drawableTimeoutSeconds;
@property (nonatomic) BOOL presentsWithTransaction;
@property (nonatomic) NSDictionary drawableProperties;
- (BOOL)shouldArchiveValueForKey:;
- (void)dealloc;
- (BOOL)presentsWithTransaction;
- (BOOL)lowLatency;
- (void)setAsynchronous:;
- (double)inputTime;
- (void)setPresentsWithTransaction:;
- (void)didChangeValueForKey:;
- (void)setDrawableTimeoutSeconds:;
- (unsigned long long)maximumDrawableCount;
- (void)_didCommitLayer:;
- (BOOL)isAsynchronous;
- (void)layerDidBecomeVisible:;
- (void)_display;
- (void)setLowLatency:;
- (void)discardContents;
- (void)setInputTime:;
- (void)setMaximumDrawableCount:;
- (double)drawableTimeoutSeconds;
- (BOOL)isDrawableAvailable;
- (id)drawableProperties;
- (void)setDrawableProperties:;
- (id)nativeWindow;
- (BOOL)_defersDidBecomeVisiblePostCommit;
- (BOOL)isDrawableAvailableInternal;
+ (id)defaultValueForKey:;
+ (BOOL)CA_automaticallyNotifiesObservers:;
@end
