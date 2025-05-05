@interface VIVisualUnderstanding : NSObject
@property (nonatomic) VIAnnotation annotation;
@property (nonatomic) NSArray imageRegions;
@property (nonatomic) NSData payload;
- (id)annotation;
- (id)payload;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)imageRegions;
- (id)initWithImageRegions:payload:;
- (id)initWithImageRegions:textBlockAnnotation:payload:;
- (id)initWithImageRegions:annotation:payload:;
@end
