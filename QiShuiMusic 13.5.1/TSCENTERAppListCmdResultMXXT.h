@interface TSCENTERAppListCmdResultMXXT : TSCENTERBaseResultMXXT
@property (nonatomic) NSString appListVer;
@property (nonatomic) NSString appListData;
@property (nonatomic) BOOL needRetry;
- (void)setAppListData:;
- (id)appListData;
- (id)appListVer;
- (BOOL)needRetry;
- (void)setAppListVer:;
- (void)setNeedRetry:;
- (void).cxx_destruct;
@end
