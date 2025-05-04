@interface AWELynxCommonAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)weakTarget;
+ (id)defaultPrefixToAk;
+ (Class)weakTargetClass;
+ (id)defaultPrefixToAkInDebug;
+ (id)defaultAkToPrefixListInDebug;
@end
