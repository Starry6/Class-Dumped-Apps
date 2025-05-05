@interface AVVideoCompositionRenderHint : NSObject
@property (nonatomic) {?=qiIq} startCompositionTime;
@property (nonatomic) {?=qiIq} endCompositionTime;
- (void)dealloc;
- (id)initWithStartCompositionTime:endCompositionTime:subsequentStartCompositionTime:subsequentEndCompositionTime:;
- (id)startCompositionTime;
- (id)endCompositionTime;
- (id)subsequentStartCompositionTime;
- (id)subsequentEndCompositionTime;
@end
