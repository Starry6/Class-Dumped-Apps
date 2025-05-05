@interface WBSTouchIconRequest : WBSSiteMetadataRequest
@property (nonatomic) BOOL iconGenerationEnabled;
@property (nonatomic) BOOL iconDownloadingEnabled;
@property (nonatomic) {CGSize=dd} minimumIconSize;
@property (nonatomic) {CGSize=dd} maximumIconSize;
@property (nonatomic) NSString monogramTitle;
@property (nonatomic) {CGSize=dd} sizeForDrawing;
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uniqueIdentifier;
- (unsigned long long)hash;
- (id)sizeForDrawing;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithTitle:url:minimumIconSize:maximumIconSize:iconGenerationEnabled:;
- (id)initWithTitle:url:minimumIconSize:maximumIconSize:;
- (id)initWithTitle:url:minimumIconSize:maximumIconSize:iconGenerationEnabled:iconDownloadingEnabled:;
- (BOOL)isIconGenerationEnabled;
- (BOOL)isIconDownloadingEnabled;
- (id)minimumIconSize;
- (id)maximumIconSize;
- (id)monogramTitle;
+ (id)requestWithTitle:url:minimumIconSize:maximumIconSize:iconGenerationEnabled:iconDownloadingEnabled:;
+ (id)requestWithTitle:url:minimumIconSize:maximumIconSize:iconGenerationEnabled:;
+ (id)requestWithTitle:url:minimumIconSize:maximumIconSize:;
@end
