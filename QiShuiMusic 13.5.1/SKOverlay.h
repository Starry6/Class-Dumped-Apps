@interface SKOverlay : NSObject
@property (nonatomic) <SKOverlayDelegate> delegate;
@property (nonatomic) SKOverlayConfiguration configuration;
@property (nonatomic) <ASOOverlayDelegate> overlayDelegate;
@property (nonatomic) <ASOOverlayConfiguration> overlayConfiguration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)configuration;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
- (id)overlayDelegate;
- (void)storeOverlay:willStartPresentation:;
- (void)storeOverlay:didFinishPresentation:;
- (void)storeOverlay:willStartDismissal:;
- (void)storeOverlay:didFinishDismissal:;
- (void)storeOverlay:didFailToLoadWithError:;
- (id)overlayConfiguration;
- (void)presentInScene:;
- (BOOL)isReadyToPresentInScene:;
- (id)tranformToPublicError:;
+ (void)dismissOverlayInScene:;
+ (id)unsupportedPlatformErrorWithAPIName:;
@end
