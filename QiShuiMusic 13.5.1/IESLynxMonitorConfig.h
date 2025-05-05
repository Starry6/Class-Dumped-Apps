@interface IESLynxMonitorConfig : NSObject
@property (nonatomic) NSString sessionID;
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) NSString pageName;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString url;
@property (nonatomic) NSString tag;
@property (nonatomic) BOOL offline;
- (id)commonParams;
- (void)setCommonParams:;
- (void)setSessionID:;
- (void)setChannel:;
- (id)sessionID;
- (id)tag;
- (id)url;
- (id)init;
- (id)channel;
- (void)setOffline:;
- (void)setUrl:;
- (BOOL)isOffline;
- (void)setTag:;
- (void).cxx_destruct;
- (void)setPageName:;
- (id)pageName;
+ (id)lynxVersion;
@end
