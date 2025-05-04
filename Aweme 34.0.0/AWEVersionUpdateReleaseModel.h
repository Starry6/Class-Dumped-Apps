@interface AWEVersionUpdateReleaseModel : NSObject
@property (nonatomic) NSString latestPublishingVersion;
@property (nonatomic) NSString latestPublishedVersion;
@property (nonatomic) BOOL enable;
@property (nonatomic) NSNumber pIsValid;
@property (nonatomic) BOOL isValid;
- (id)latestPublishedVersion;
- (id)latestPublishingVersion;
- (id)pIsValid;
- (void)setLatestPublishingVersion:;
- (void)setLatestPublishedVersion:;
- (void)setPIsValid:;
- (BOOL)enable;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setEnable:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
+ (long long)diffVersionCountWithLeftVersion:rightVersion:error:;
+ (BOOL)checkVersionCodeValid:;
@end
