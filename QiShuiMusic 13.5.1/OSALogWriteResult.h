@interface OSALogWriteResult : NSObject
@property (nonatomic) OSALogIdentity identity;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSError error;
- (id)filePath;
- (id)identity;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithIdentity:filePath:;
- (id)initWithIdentity:error:;
+ (BOOL)supportsSecureCoding;
@end
