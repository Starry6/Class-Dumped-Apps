@interface GEOGuidesHomeResultFilter : NSObject
@property (nonatomic) GEOGuidesHomeResultFilterTypeConcept conceptFilter;
@property (nonatomic) q filterType;
@property (nonatomic) GEOPDGuidesHomeResultFilter pdResultFilter;
- (long long)filterType;
- (void).cxx_destruct;
- (id)initWithGuidesHomeResultFilter:;
- (id)conceptFilter;
- (id)pdResultFilter;
@end
