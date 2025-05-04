@interface AWEIMActiveUserDataTracker : NSObject
@property (nonatomic) NSMutableDictionary trackDataDict;
@property (nonatomic) NSString trackEvent;
- (id)trackEvent;
- (void)setTrackEvent:;
- (void)trackWithActiveUserInfo:uid:overwritingEntries:;
- (id)trackDataDict;
- (void)setTrackDataDict:;
- (void)trackWithActiveUserInfo:uid:;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
@end
