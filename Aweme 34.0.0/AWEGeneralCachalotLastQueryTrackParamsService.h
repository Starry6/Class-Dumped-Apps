@interface AWEGeneralCachalotLastQueryTrackParamsService : NSObject
@property (nonatomic) NSString previousQuery;
@property (nonatomic) double previousTimestamp;
@property (nonatomic) NSString previousSource;
- (id)previousQuery;
- (void)setPreviousQuery:;
- (id)previousSource;
- (void)setPreviousSource:;
- (id)init;
- (void).cxx_destruct;
- (double)previousTimestamp;
- (void)setPreviousTimestamp:;
+ (id)sharedInstance;
@end
