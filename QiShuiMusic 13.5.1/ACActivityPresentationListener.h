@interface ACActivityPresentationListener : NSObject
@property (nonatomic) _TtC11ActivityKit37ActivityPresentationObservationClient client;
- (id)init;
- (void)setClient:;
- (id)client;
- (void).cxx_destruct;
- (id)listenForActivityPresentation:presenterBundleIdentifier:withHandler:;
@end
