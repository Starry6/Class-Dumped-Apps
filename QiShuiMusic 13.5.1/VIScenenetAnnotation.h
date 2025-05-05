@interface VIScenenetAnnotation : NSObject
@property (nonatomic) NSArray annotations;
@property (nonatomic) Q revision;
- (id)annotations;
- (void).cxx_destruct;
- (unsigned long long)revision;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAnnotations:revision:;
@end
