@interface ARCoachingInstanceTransform : NSObject
@property (nonatomic) {?=[4]} transform;
@property (nonatomic)  localScale;
@property (nonatomic)  recordedScale;
@property (nonatomic)  localTranslation;
@property (nonatomic)  recordedTranslation;
- (id)transform;
- (id)init:;
- (id)localScale;
- (void)setLocalScale:;
- (id)localTranslation;
- (void)setLocalTranslation:;
- (void)doTransform;
- (id)recordedScale;
- (void)setRecordedScale:;
- (id)recordedTranslation;
- (void)setRecordedTranslation:;
@end
