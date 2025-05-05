@interface VITextBlockAnnotation : NSObject
@property (nonatomic) NSString description;
@property (nonatomic) NSArray textAnnotations;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTextAnnotations:;
- (id)textAnnotations;
+ (id)empty;
+ (id)textBlockWithDocumentObservations:;
+ (id)textBlockWithAnnotations:;
@end
