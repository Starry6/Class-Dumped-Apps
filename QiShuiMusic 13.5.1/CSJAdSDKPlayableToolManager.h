@interface CSJAdSDKPlayableToolManager : NSObject
@property (nonatomic) NSString playableURL;
@property (nonatomic) NSString downloadUrl;
@property (nonatomic) NSString deeplinkUrl;
@property (nonatomic) BOOL isLandScape;
- (void)setIsLandScape:;
- (void)setPlayableURL:;
- (void)setDeeplinkUrl:;
- (id)deeplinkUrl;
- (BOOL)isLandScape;
- (id)playableURL;
- (BOOL)isMemberOfClass:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)downloadUrl;
- (void)setDownloadUrl:;
+ (void)setIsLandScape:;
+ (void)setPlayableURL:;
+ (void)setDeeplinkUrl:;
+ (id)sharedInstance;
+ (void)clearAll;
+ (void)setDownloadUrl:;
@end
