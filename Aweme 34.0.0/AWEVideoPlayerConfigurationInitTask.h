@interface AWEVideoPlayerConfigurationInitTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)initializePlayer;
+ (void)execute;
+ (void)setupAudioSession;
@end
