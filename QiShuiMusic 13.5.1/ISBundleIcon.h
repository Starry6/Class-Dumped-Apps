@interface ISBundleIcon : ISConcreteIcon
@property (nonatomic) NSURL url;
@property (nonatomic) NSString type;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString tagClass;
- (id)tag;
- (id)url;
- (id)initWithBundleURL:type:;
- (id)initWithCoder:;
- (id)initWithBundleURL:fileExtension:;
- (void)encodeWithCoder:;
- (id)type;
- (id)makeResourceProvider;
- (id)tagClass;
- (id)initWithBundleURL:;
- (double)_aspectRatio;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleURL:type:tag:tagClass:;
- (id)_makeDocumentResourceProvider;
- (id)_makeAppResourceProvider;
+ (BOOL)supportsSecureCoding;
@end
