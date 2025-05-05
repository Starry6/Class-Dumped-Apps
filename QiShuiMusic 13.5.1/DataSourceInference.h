@interface DataSourceInference : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)dataPointAtIndex:error:;
- (unsigned long long)numberOfDataPoints;
- (id)initWithLength:contextKey:targetKey:;
- (void)setVectorsWithProcessor:;
@end
