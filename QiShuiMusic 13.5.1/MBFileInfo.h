@interface MBFileInfo : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) BOOL isDirectory;
@property (nonatomic) q priority;
@property (nonatomic) NSDictionary extendedAttributes;
- (BOOL)isDirectory;
- (id)path;
- (void)setPriority:;
- (void)dealloc;
- (void)setPath:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setExtendedAttributes:;
- (id)description;
- (id)extendedAttributes;
- (id)copyWithZone:;
- (long long)priority;
- (void)setIsDirectory:;
- (id)initWithPath:extendedAttributes:;
+ (BOOL)supportsSecureCoding;
+ (id)fileInfoWithPath:extendedAttributes:;
@end
