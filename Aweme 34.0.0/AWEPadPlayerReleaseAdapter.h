@interface AWEPadPlayerReleaseAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willAppearScene:;
- (void)willDisappearScene:;
- (BOOL)enableForScene:;
- (id)weakTarget;
+ (Class)weakTargetClass;
@end
