@interface ARSplitTechniqueSynchronizerTechnique : ARTechnique
@property (nonatomic) NSSet synchronizedResultDataClasses;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)requestResultDataAtTimestamp:context:;
- (void)technique:didOutputResultData:timestamp:context:;
- (BOOL)reconfigurableFrom:;
- (void)technique:didFailWithError:;
- (id)initWithSynchronizedResultDataClasses:;
- (void)_recursivelyGatherData:fromContext:;
- (id)synchronizedResultDataClasses;
@end
