@interface IMBalloonBrowserPlugin : IMBalloonPlugin
- (id)version;
- (BOOL)isBetaPlugin;
- (id)initWithIdentifier:browserDisplayName:browserImageName:;
- (id)initWithIdentifier:browserDisplayName:browserImageName:browserClass:presentationContext:;
@end
