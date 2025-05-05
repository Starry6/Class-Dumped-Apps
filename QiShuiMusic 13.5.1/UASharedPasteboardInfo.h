@interface UASharedPasteboardInfo : NSObject
@property (nonatomic) NSFileHandle dataFile;
@property (nonatomic) q dataSize;
@property (nonatomic) NSArray items;
@property (nonatomic) NSString sharedDataPath;
@property (nonatomic) NSDictionary sandboxExtensions;
- (id)sandboxExtensions;
- (void)setSandboxExtensions:;
- (long long)dataSize;
- (id)items;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setItems:;
- (void).cxx_destruct;
- (id)description;
- (void)setDataSize:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)dataFile;
- (void)setDataFile:;
- (id)sharedDataPath;
- (void)setSharedDataPath:;
+ (BOOL)supportsSecureCoding;
@end
