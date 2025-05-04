@interface AWEMVChannelPreCacheInitTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)preReadColdCache;
+ (void)execute;
@end
