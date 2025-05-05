@interface INPortableImageLoader : NSObject
@property (nonatomic) <INPortableImageLoaderHelping> helper;
@property (nonatomic) NSString serviceIdentifier;
@property (nonatomic) Q servicePriority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_helperClassName;
- (unsigned long long)servicePriority;
- (void)loadImageDataFromImage:accessSpecifier:completion:;
- (id)helper;
- (void)loadDataImageFromImage:usingPortableImageLoader:scaledSize:completion:;
- (id)serviceIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)canLoadImageDataForImage:;
+ (BOOL)supportsSecureCoding;
@end
