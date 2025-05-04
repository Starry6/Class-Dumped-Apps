@interface AWEPlayInteractionElementAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapElementClassName:withContext:;
- (id)filterElementClassNames:withContext:;
- (id)leftElementStrategies;
- (id)rightElementStrategies;
- (id)bottomElementStrategies;
- (id)weakTarget;
+ (Class)weakTargetClass;
@end
