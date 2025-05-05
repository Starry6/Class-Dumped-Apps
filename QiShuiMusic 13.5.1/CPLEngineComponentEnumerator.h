@interface CPLEngineComponentEnumerator : NSObject
- (void).cxx_destruct;
- (id)initWithComponents:handler:;
- (void)handleNextComponent;
@end
