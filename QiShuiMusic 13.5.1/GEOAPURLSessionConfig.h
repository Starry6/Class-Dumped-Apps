@interface GEOAPURLSessionConfig : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger noCellAuthType;
@property (nonatomic) BOOL requireWifi;
@property (nonatomic) BOOL requirePower;
@property (nonatomic) BOOL discretionary;
- (void)setDiscretionary:;
- (BOOL)discretionary;
- (void)setType:;
- (void)setRequireWifi:;
- (BOOL)requirePower;
- (int)type;
- (BOOL)requireWifi;
- (int)noCellAuthType;
- (void)setNoCellAuthType:;
- (void)setRequirePower:;
+ (id)configForURLSessionConfigType:;
+ (id)allSessionConfigTypes;
@end
