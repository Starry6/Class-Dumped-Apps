@interface PLImageDataInfo : NSObject
@property (nonatomic) q deliveredFormat;
@property (nonatomic) BOOL deliveredPlaceholder;
@property (nonatomic) BOOL canDownloadFromCloud;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString sandboxExtensionToken;
@property (nonatomic) NSString UTI;
@property (nonatomic) q EXIFOrientation;
- (void).cxx_destruct;
- (id)UTI;
- (void)setSandboxExtensionToken:;
- (id)description;
- (id)sandboxExtensionToken;
- (void)setURL:;
- (id)URL;
- (void)setUTI:;
- (void)setDeliveredPlaceholder:;
- (BOOL)deliveredPlaceholder;
- (long long)deliveredFormat;
- (void)setDeliveredFormat:;
- (BOOL)canDownloadFromCloud;
- (void)setCanDownloadFromCloud:;
- (long long)EXIFOrientation;
- (void)setEXIFOrientation:;
@end
