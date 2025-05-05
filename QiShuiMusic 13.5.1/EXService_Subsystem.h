@interface EXService_Subsystem : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)beginUsing:withBundle:;
+ (id)sharedInstance;
+ (id)initForPlugInKit;
@end
