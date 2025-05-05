@interface SBSApplicationShortcutCustomImageIcon : SBSApplicationShortcutIcon
@property (nonatomic) NSData imageData;
@property (nonatomic) q dataType;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) NSData imagePNGData;
- (BOOL)isTemplate;
- (void)encodeWithXPCDictionary:;
- (id)imageData;
- (long long)dataType;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithImageData:dataType:isTemplate:;
- (id)_initForSubclass;
- (id)initWithImageData:dataType:;
- (id)initWithImagePNGData:;
- (id)imagePNGData;
@end
