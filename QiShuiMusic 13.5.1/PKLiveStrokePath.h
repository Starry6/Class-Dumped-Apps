@interface PKLiveStrokePath : PKStrokePath
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithPoints:count:immutableCount:inputType:timestamp:UUID:inputPoints:;
- (id)regenerateStrokeWithInk:randomSeed:strokeClass:;
@end
