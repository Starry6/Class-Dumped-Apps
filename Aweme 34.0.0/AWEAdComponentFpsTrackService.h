@interface AWEAdComponentFpsTrackService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)removeAdComponentShownInfo:;
+ (id)adComponentTypeInfo:;
+ (id)adComponentShownInfo:;
+ (id)extraTrackInfoEnterAd:;
+ (id)extraTrackInfoLeaveAd:;
+ (void)updateAdComponentShown:withAweme:;
@end
