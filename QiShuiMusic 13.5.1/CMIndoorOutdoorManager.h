@interface CMIndoorOutdoorManager : NSObject
@property (nonatomic) <CMIndoorOutdoorDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)startIndoorOutdoorUpdates;
- (void)stopIndoorOutdoorUpdates;
- (void)lastKnownIndoorOutdoorStateWithHandler:;
+ (BOOL)isIndoorOutdoorStateAvailable;
@end
