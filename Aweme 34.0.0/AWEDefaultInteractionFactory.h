@interface AWEDefaultInteractionFactory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
+ (Class)aAWEPadModuleAdapterClass;
+ (id)createInteractionViewControllerWithMediaType:;
@end
