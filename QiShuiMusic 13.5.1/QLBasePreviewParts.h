@interface QLBasePreviewParts : QLPreviewConverterParts
- (void)computePreview;
+ (BOOL)canConvertDocumentType:;
+ (BOOL)isBundleURL:;
+ (id)urlCallbackForUTI:;
+ (id)dataCallbackForUTI:andSize:;
@end
