@interface AWEPadChannelTracker : NSObject
@property (nonatomic) q tabType;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (long long)tabType;
- (void)setTabType:;
- (id)actionNameForAction:;
- (id)tabNameForType:;
- (id)initWithTabType:enterFrom:;
- (void)trackDidRenderWithMonitor:;
- (void).cxx_destruct;
@end
