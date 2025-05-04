@interface AWEVideoAudioSDKABInitTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)initAudioSDKAB;
+ (id)audioSDKABStringConfig;
+ (id)audioSDKABIntConfig;
+ (id)audioSDKABBoolConfig;
+ (id)audioSDKABFloatConfig;
+ (void)execute;
@end
