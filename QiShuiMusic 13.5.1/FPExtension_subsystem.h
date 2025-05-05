@interface FPExtension_subsystem : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)beginUsing:withBundle:;
- (void)endUsing:;
+ (id)sharedInstance;
+ (id)initForPlugInKit;
@end
