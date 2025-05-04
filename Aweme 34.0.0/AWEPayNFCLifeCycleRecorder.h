@interface AWEPayNFCLifeCycleRecorder : NSObject
@property (nonatomic) double lastAppWillEnterForegroundTimestamp;
@property (nonatomic) double lastAppDidBecomeActiveTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidBecomeActive;
- (void)onAppWillEnterForeground;
- (double)lastAppWillEnterForegroundTimestamp;
- (double)lastAppDidBecomeActiveTimestamp;
- (void)setLastAppWillEnterForegroundTimestamp:;
- (void)setLastAppDidBecomeActiveTimestamp:;
@end
