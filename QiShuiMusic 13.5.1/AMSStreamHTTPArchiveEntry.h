@interface AMSStreamHTTPArchiveEntry : NSObject
@property (nonatomic) NSArray entries;
@property (nonatomic) NSString urlString;
- (id)urlString;
- (void)setEntries:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)entries;
- (id)initWithEntries:;
- (void)setUrlString:;
- (id)initWithHTTPArchiveTaskInfo:;
+ (BOOL)supportsSecureCoding;
+ (id)_createEntriesForTaskMetrics:requestData:responseData:;
@end
