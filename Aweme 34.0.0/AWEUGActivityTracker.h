@interface AWEUGActivityTracker : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackPendantShowCheck:result:;
+ (void)trackFeedPendantSync:;
+ (void)trackPendantDownload:code:;
@end
