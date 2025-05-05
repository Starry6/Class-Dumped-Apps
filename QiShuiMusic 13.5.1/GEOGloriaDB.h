@interface GEOGloriaDB : NSObject
- (BOOL)unsafeDataForQuadKey:result:;
- (BOOL)unsafeMetadata:;
- (BOOL)enumerateDataAtLocation:radius:zoom:visitor:;
- (BOOL)_unsafeDataForQuadKey:ofType:result:;
- (id)metadata;
- (id)initWithFileURL:rootQuadKey:metadataClass:dataClass:log:;
- (id)dataForQuadKeyNum:;
- (id)_dataForQuadKey:ofType:;
- (BOOL)containsQuadKeyNum:;
- (void).cxx_destruct;
- (BOOL)unsafeEnumerateDataAtLocation:radius:zoom:visitor:;
- (BOOL)enumerateDataAtLocation:radius:visitor:;
- (id)initWithFileURL:rootQuadKey:log:;
- (BOOL)containsQuadKey:;
- (BOOL)unsafeDataForQuadKeyNum:result:;
- (BOOL)unsafeEnumerateDataAtLocation:radius:visitor:;
- (id)dataForQuadKey:;
- (id).cxx_construct;
@end
