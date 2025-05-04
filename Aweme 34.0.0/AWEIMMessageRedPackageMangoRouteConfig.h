@interface AWEIMMessageRedPackageMangoRouteConfig : NSObject
@property (nonatomic) BOOL enableDynamicSchema;
@property (nonatomic) BOOL enableTrack;
@property (nonatomic) BOOL fallbackFullPageWhenFail;
@property (nonatomic) q blockInternalPushAPI;
@property (nonatomic) NSString blockInternalPushQueryKey;
@property (nonatomic) NSString blockInternalPushQueryValue;
- (BOOL)enableTrack;
- (void)setEnableTrack:;
- (long long)blockInternalPushAPI;
- (id)blockInternalPushQueryKey;
- (id)blockInternalPushQueryValue;
- (BOOL)enableDynamicSchema;
- (BOOL)fallbackFullPageWhenFail;
- (void)setEnableDynamicSchema:;
- (void)setFallbackFullPageWhenFail:;
- (void)setBlockInternalPushAPI:;
- (void)setBlockInternalPushQueryKey:;
- (void)setBlockInternalPushQueryValue:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
