@interface VKARWalkingFeature : NSObject
@property (nonatomic) q type;
@property (nonatomic) Q intraFeaturePriority;
- (long long)type;
- (BOOL)isEqual:;
- (id)initWithType:;
- (id)initWithType:intraFeaturePriority:;
- (unsigned long long)intraFeaturePriority;
@end
