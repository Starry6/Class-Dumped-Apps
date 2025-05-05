@interface VITextLookupQuery : NSObject
@property (nonatomic) NSString queryTerm;
@property (nonatomic) VITextContext textContext;
@property (nonatomic) NSString hintDomain;
@property (nonatomic) <VIImageContent> imageContext;
@property (nonatomic) VIAnnotation annotation;
@property (nonatomic) VIQueryContext queryContext;
- (id)annotation;
- (id)queryContext;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)textContext;
- (id)imageContext;
- (id)queryTerm;
- (id)hintDomain;
- (id)initWithQueryTerm:hintDomain:textContext:imageContext:annotation:queryContext:;
- (id)initWithQueryTerm:domain:textContext:imageContext:annotation:queryContext:;
@end
