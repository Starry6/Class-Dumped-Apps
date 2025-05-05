@interface PDFAKAnnotationSerializationHelper : NSObject
+ (void)addAKAnnotation:toAnnotationDictionary:;
+ (id)akAnnotationFromCGPDFAnnotation:andDictionary:;
+ (BOOL)_annotationClassHasSeniority:;
+ (BOOL)_shouldUseAKAnnotation:toRepresentCGPDFDictionary:;
@end
