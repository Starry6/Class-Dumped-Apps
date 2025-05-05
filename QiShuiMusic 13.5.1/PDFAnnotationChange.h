@interface PDFAnnotationChange : NSObject
@property (nonatomic) NSInteger changeType;
@property (nonatomic) PDFAnnotation annotation;
@property (nonatomic) Q changeTimestamp;
- (id)annotation;
- (int)changeType;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)changeTimestamp;
- (id)initWithAddedAnnotation:;
- (id)initWithChangedAnnotation:;
- (id)initWithRemovedAnnotation:;
- (id)initWithReorderedAnnotation:;
- (id)initWithReorderedAndChangedAnnotation:;
@end
