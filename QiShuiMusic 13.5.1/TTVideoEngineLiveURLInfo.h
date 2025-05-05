@interface TTVideoEngineLiveURLInfo : NSObject
@property (nonatomic) NSString mainPlayURL;
@property (nonatomic) NSString backupPlayURL;
- (void)setMainPlayURL:;
- (id)backupPlayURL;
- (id)mainPlayURL;
- (void)setBackupPlayURL:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
