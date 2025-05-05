@interface HSArtworkRequest : HSRequest
- (BOOL)isConcurrent;
- (id)initWithDatabaseID:itemID:size:;
- (BOOL)acceptsGzipEncoding;
+ (id)requestWithDatabaseID:itemID:size:;
@end
