@interface AWEConcernRelationCommonAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)weakTarget;
+ (Class)weakTargetClass;
+ (BOOL)showVCDWithCondition:;
+ (BOOL)showHotsoonFooterWithCondition:;
+ (BOOL)shouldShowVCDFooterWithCondition:;
@end
