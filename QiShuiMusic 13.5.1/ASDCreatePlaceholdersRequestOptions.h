@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions
@property (nonatomic) BOOL completeDataPromise;
@property (nonatomic) BOOL createAsMobileBackup;
@property (nonatomic) NSArray items;
- (id)items;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithApplicationMetadata:;
- (BOOL)completeDataPromise;
- (void)setCompleteDataPromise:;
- (BOOL)createAsMobileBackup;
- (void)setCreateAsMobileBackup:;
+ (BOOL)supportsSecureCoding;
@end
