@interface VeLSPitayaWrapper : NSObject
- (void)initPitaya:;
- (BOOL)isPitayaReady;
- (id)runSmartStrategy:strategyName:;
+ (id)sharedInstance;
@end
