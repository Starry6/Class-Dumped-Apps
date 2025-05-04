@interface AWESafemodeApp : NSObject
- (void)safemodeDidFinishLaunching;
- (void)fixingAssert;
- (void)startTTNet;
- (void)startHeimdallr;
+ (id)shared;
@end
