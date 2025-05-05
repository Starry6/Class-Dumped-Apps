@interface BMMediaUsageEvent : BMEventBase
@property (nonatomic) NSURL URL;
@property (nonatomic) NSURL mediaURL;
@property (nonatomic) BOOL usageTrusted;
@property (nonatomic) BOOL starting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDateInterval dateInterval;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) double duration;
@property (nonatomic) NSString bundleID;
- (id)init;
- (id)mediaURL;
- (BOOL)isUsageTrusted;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isValidWithContext:error:;
- (void)setURL:;
- (id)URL;
- (id)initWithBegin:bundleID:URL:mediaURL:timestamp:;
- (id)initWithBegin:bundleID:URL:mediaURL:usageTrusted:timestamp:;
- (void)setMediaURL:;
- (void)setUsageTrusted:;
+ (id)new;
@end
