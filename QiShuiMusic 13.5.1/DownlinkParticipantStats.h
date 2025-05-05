@interface DownlinkParticipantStats : NSObject
@property (nonatomic) NSDictionary streamGroupStats;
- (id)init;
- (void)dealloc;
- (id)statsForStreamGroup:;
- (id)streamGroupStats;
@end
