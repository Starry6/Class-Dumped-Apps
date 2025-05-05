@interface PLPhotoEditSource : PLEditSource
- (BOOL)isRAWSource;
- (id)initWithURL:type:image:useEmbeddedPreview:;
- (void)setURL:type:image:useEmbeddedPreview:;
- (id)newSourceWithURL:type:useEmbeddedPreview:;
@end
