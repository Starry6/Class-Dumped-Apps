@interface MFTypeInfo : NSObject
@property (nonatomic) NSString mimeType;
@property (nonatomic) NSString pathExtension;
@property (nonatomic) NSString filename;
@property (nonatomic) I osType;
- (id)filename;
- (id)pathExtension;
- (void)setFilename:;
- (id)mimeType;
- (void).cxx_destruct;
- (void)setMimeType:;
- (unsigned int)osType;
- (void)setOsType:;
- (void)setPathExtension:;
@end
