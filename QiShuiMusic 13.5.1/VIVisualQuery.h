@interface VIVisualQuery : NSObject
@property (nonatomic) <VIImageContent> image;
@property (nonatomic) VIAnnotation annotation;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedRegionOfInterest;
@property (nonatomic) NSSet domainsOfInterest;
@property (nonatomic) VIQueryContext queryContext;
- (id)annotation;
- (id)queryContext;
- (void).cxx_destruct;
- (id)image;
- (id)copyWithZone:;
- (id)initWithImage:annotation:normalizedRegionOfInterest:domainsOfInterest:queryContext:;
- (id)normalizedRegionOfInterest;
- (id)initWithImage:textBlockAnnotation:normalizedRegionOfInterest:domainsOfInterest:queryContext:;
- (id)domainsOfInterest;
+ (id)queryWithPixelBuffer:orientation:normalizedRegionOfInterest:annotation:queryContext:;
+ (id)queryWithPixelBuffer:orientation:;
+ (id)queryWithPixelBuffer:orientation:normalizedRegionOfInterest:;
+ (id)queryWithPixelBuffer:orientation:normalizedRegionOfInterest:textBlockAnnotation:queryContext:;
@end
