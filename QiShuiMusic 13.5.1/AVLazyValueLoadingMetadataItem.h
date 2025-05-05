@interface AVLazyValueLoadingMetadataItem : AVMetadataItem
- (void)dealloc;
- (id)dataType;
- (void)loadValuesAsynchronouslyForKeys:completionHandler:;
- (long long)statusOfValueForKey:error:;
- (id)value;
- (id)_initWithFigMetadataDictionary:valueLoadingHandler:;
- (void)_valueRequestDidFinish;
- (BOOL)_valueForKeyDependsOnMetadataValue:;
- (long long)_valueStatus;
- (void)_waitForLoadingOfValueDependentKey:;
+ (id)metadataItemWithPropertiesOfMetadataItem:valueLoadingHandler:;
@end
