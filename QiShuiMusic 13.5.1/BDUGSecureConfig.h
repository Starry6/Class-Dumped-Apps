@interface BDUGSecureConfig : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString notificationName;
@property (nonatomic) BOOL needConsumeRepeatedly;
@property (nonatomic) BOOL detectPatternsEnable;
@property (nonatomic) BOOL ignoreSettings;
@property (nonatomic) @? content;
@property (nonatomic) NSArray patterns;
- (BOOL)detectPatternsEnable;
- (BOOL)ignoreSettings;
- (BOOL)needConsumeRepeatedly;
- (void)setDetectPatternsEnable:;
- (void)setIgnoreSettings:;
- (void)setNeedConsumeRepeatedly:;
- (id)content;
- (void)setContent:;
- (id)notificationName;
- (id)init;
- (id)key;
- (id)patterns;
- (void)setKey:;
- (void).cxx_destruct;
- (void)setNotificationName:;
- (void)setPatterns:;
@end
