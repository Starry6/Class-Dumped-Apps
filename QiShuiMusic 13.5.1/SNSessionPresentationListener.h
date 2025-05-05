@interface SNSessionPresentationListener : NSObject
@property (nonatomic) ACActivityPresentationListener listener;
- (id)init;
- (id)listener;
- (void).cxx_destruct;
- (void)setListener:;
- (id)listenForSessionPresentation:presenterBundleIdentifier:withHandler:;
@end
