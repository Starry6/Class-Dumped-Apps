@interface IESLiveResourceLoadTraceHandler : NSObject
@property (nonatomic) BOOL booting;
- (BOOL)booting;
- (void)recordLoadType:name:;
- (void)setBooting:;
- (void)executeAction:;
+ (id)handler;
@end
