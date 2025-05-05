@interface EXSwiftUI_Subsystem : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)beginUsing:withBundle:;
+ (BOOL)initialized;
+ (id)sharedInstance;
+ (id)initForPlugInKit;
@end
