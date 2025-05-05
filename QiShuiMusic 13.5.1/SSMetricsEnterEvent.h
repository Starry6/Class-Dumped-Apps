@interface SSMetricsEnterEvent : SSMetricsBaseEvent
@property (nonatomic) NSString enterType;
@property (nonatomic) NSString referringAppName;
@property (nonatomic) NSString referringURL;
- (id)init;
- (void)setReferringURL:;
- (id)referringAppName;
- (void)setReferringAppName:;
- (id)referringURL;
- (id)description;
- (id)enterType;
- (void)setEnterType:;
- (void)setEnterTypeWithLaunchReason:;
@end
