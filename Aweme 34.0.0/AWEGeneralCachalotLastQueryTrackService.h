@interface AWEGeneralCachalotLastQueryTrackService : NSObject
@property (nonatomic) NSString previousQuery;
@property (nonatomic) double previousTimestamp;
@property (nonatomic) NSString previousSource;
- (id)previousQuery;
- (void)setPreviousQuery:;
- (id)previousSource;
- (void)setPreviousSource:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (double)previousTimestamp;
- (void)setPreviousTimestamp:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
