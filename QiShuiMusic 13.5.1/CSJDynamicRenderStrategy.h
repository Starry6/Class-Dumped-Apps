@interface CSJDynamicRenderStrategy : CSJRenderStrategy
- (void)reopenSKoverlay;
- (id)_pro_handleRenderDidFinishWithDictionary:error:;
- (void)addReopenSKOverlayObserver;
- (void)jsCallNative_showSKOverlay;
- (id)jsCallNative_type:params:;
- (id)logKeyName;
- (long long)renderType;
- (void)safeDelegate_dynamicRenderStrategy:reportError:;
- (void)safeDelegate_dynamicRenderStrategy:reportLabel:;
- (long long)safeDelegate_playPercentInDynamicRenderStrategy:;
- (double)safeDelegate_renderTimeoutInDynamicRenderStrategy:;
- (void)render;
@end
