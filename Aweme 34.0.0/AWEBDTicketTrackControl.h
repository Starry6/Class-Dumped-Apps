@interface AWEBDTicketTrackControl : NSObject
@property (nonatomic) NSDictionary trackConfig;
- (id)trackConfig;
- (void)setTrackConfig:;
- (void).cxx_destruct;
+ (BOOL)canTrackWithEvent:;
+ (void)setupBDTicketTrack;
+ (id)sharedInstance;
@end
