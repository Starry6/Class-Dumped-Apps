@interface AVUnreachableAssetInspectorLoader : AVAssetInspectorLoader
- (void)dealloc;
- (Class)_classForTrackInspectors;
- (void)loadValuesAsynchronouslyForKeys:completionHandler:;
- (long long)statusOfValueForKey:error:;
- (id)initWithFigError:userInfo:;
- (id)initForUnitTests;
@end
