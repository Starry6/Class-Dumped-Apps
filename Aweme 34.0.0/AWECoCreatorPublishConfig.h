@interface AWECoCreatorPublishConfig : NSObject
@property (nonatomic) q currentType;
- (BOOL)isAweme;
- (void)setCurrentType:;
- (long long)currentType;
+ (id)sharedManager;
@end
