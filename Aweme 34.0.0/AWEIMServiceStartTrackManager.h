@interface AWEIMServiceStartTrackManager : NSObject
@property (nonatomic) q serviceStartReason;
- (BOOL)recordAndTrackStartReasonViaStackIfNecessary;
- (void)setServiceStartReason:;
- (void)p_fetchReason;
- (long long)serviceStartReason;
- (id)p_nameOfReason:;
- (id)p_reasonOfFrame:;
- (id)init;
+ (id)sharedInstance;
@end
