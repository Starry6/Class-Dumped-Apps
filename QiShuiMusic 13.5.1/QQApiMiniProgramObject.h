@interface QQApiMiniProgramObject : NSObject
@property (nonatomic) QQApiObject qqApiObject;
@property (nonatomic) NSString miniAppID;
@property (nonatomic) NSString miniPath;
@property (nonatomic) NSString webpageUrl;
@property (nonatomic) Q miniprogramType;
- (unsigned long long)miniprogramType;
- (void)setQqApiObject:;
- (id)miniAppID;
- (id)miniPath;
- (id)qqApiObject;
- (void)setMiniAppID:;
- (void)setMiniPath:;
- (void)setMiniprogramType:;
- (void)setWebpageUrl:;
- (id)webpageUrl;
- (id)init;
@end
