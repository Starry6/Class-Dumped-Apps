@interface TTVideoEngineAdaptiveInfo : NSObject
@property (nonatomic) NSString mainPlayURL;
@property (nonatomic) NSString backupPlayURL;
@property (nonatomic) NSString adaptiveType;
- (void)setMainPlayURL:;
- (id)adaptiveType;
- (id)allURLForVideoID:transformedURL:;
- (id)backupPlayURL;
- (id)mainPlayURL;
- (void)setAdaptiveType:;
- (void)setBackupPlayURL:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
