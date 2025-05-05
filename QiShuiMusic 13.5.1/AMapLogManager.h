@interface AMapLogManager : NSObject
@property (nonatomic) Q enabledLogType;
@property (nonatomic) BOOL colorsEnabled;
- (BOOL)colorsEnabled;
- (unsigned long long)enabledLogType;
- (void)log:logType:file:line:function:format:;
- (void)setColor:forType:;
- (void)setColorsEnabled:;
- (void)setEnabledLogType:;
+ (id)sharedInstance;
@end
