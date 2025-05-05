@interface PAMediaConversionServiceResourceURLReference : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) BOOL mustStopAccessingURL;
@property (nonatomic) BOOL shouldDeleteOnDeallocation;
- (id)url;
- (void)dealloc;
- (unsigned long long)hash;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)dictionaryRepresentationWithError:;
- (BOOL)isEqual:;
- (void)getPathHash:lastPathComponent:;
- (BOOL)getFileSize:error:;
- (BOOL)mustStopAccessingURL;
- (void)setMustStopAccessingURL:;
- (BOOL)shouldDeleteOnDeallocation;
- (void)setShouldDeleteOnDeallocation:;
+ (id)referenceWithURL:;
+ (id)referenceWithDictionaryRepresentation:error:;
+ (BOOL)getPathHash:lastPathComponent:forDictionaryRepresentation:;
@end
