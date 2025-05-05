@interface BDTrackerEvent : NSObject
@property (nonatomic) NSDictionary data;
@property (nonatomic) q policy;
@property (nonatomic) q version;
- (void)setPolicy:;
- (void)setVersion:;
- (id)data;
- (long long)policy;
- (long long)version;
- (void).cxx_destruct;
- (void)setData:;
@end
