@interface AKApplicationMetadataInfo : NSObject
@property (nonatomic) NSString authorizedAppListVersion;
@property (nonatomic) NSDictionary teams;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResponseInfo:;
- (id)authorizedAppListVersion;
- (id)teams;
+ (BOOL)supportsSecureCoding;
@end
