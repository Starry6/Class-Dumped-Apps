@interface IESLiveSaaSECOrientationService : NSObject
@property (nonatomic) Q orientationType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)orientationType;
- (void)forceUpdateToOrientation:;
- (BOOL)isCurrentLandscape;
- (void)setOrientationType:;
+ (id)serviceOf:;
@end
