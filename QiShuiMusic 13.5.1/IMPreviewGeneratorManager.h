@interface IMPreviewGeneratorManager : NSObject
@property (nonatomic) NSDictionary UTITypes;
@property (nonatomic) NSDictionary dynamicTypes;
- (id)init;
- (void)dealloc;
- (id)UTITypes;
- (void)setUTITypes:;
- (id)newPreviewFromSourceURL:withPreviewConstraints:error:;
- (BOOL)generateAndPersistPreviewFromSourceURL:previewURL:size:balloonBundleID:previewConstraints:error:;
- (BOOL)generateAndPersistMapPreviewFromSourceURL:previewURL:size:previewConstraints:error:;
- (BOOL)generateAndPersistContactCardPreviewFromSourceURL:previewURL:size:previewConstraints:error:;
- (BOOL)generateAndPersistMetadataFromSourceURL:destinationURL:size:constraints:error:;
- (BOOL)sizePreviewFromSourceURL:size:previewConstraints:error:;
- (BOOL)persistPreviewToDiskCache:previewURL:error:;
- (BOOL)movePreviewToDiskCache:previewURL:error:;
- (Class)_previewGeneratorClassForSourceURL:;
- (Class)previewGeneratorClassForUTIType:;
- (id)dynamicTypes;
- (void)setDynamicTypes:;
+ (id)sharedInstance;
@end
