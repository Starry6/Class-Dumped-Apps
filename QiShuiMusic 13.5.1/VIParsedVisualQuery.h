@interface VIParsedVisualQuery : NSObject
@property (nonatomic) <VIImageContent> image;
@property (nonatomic) VIVisualUnderstanding visualUnderstanding;
@property (nonatomic) VIQueryContext queryContext;
- (id)queryContext;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)image;
- (id)copyWithZone:;
- (id)visualUnderstanding;
- (id)initWithImage:imageRegions:textBlockAnnotation:queryContext:payload:;
- (id)initWithImage:visualUnderstanding:queryContext:;
+ (id)queryWithPixelBuffer:orientation:imageRegions:textBlockAnnotation:queryContext:payload:;
+ (id)queryWithPixelBuffer:orientation:imageRegions:payload:;
@end
