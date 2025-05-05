@interface SSDownloadManifestResponse : NSObject
@property (nonatomic) NSArray validDownloads;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)validDownloads;
- (void)setValidDownloads:;
+ (BOOL)supportsSecureCoding;
@end
