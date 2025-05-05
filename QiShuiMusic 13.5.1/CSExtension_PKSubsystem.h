@interface CSExtension_PKSubsystem : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)beginUsing:withBundle:;
- (void)endUsing:;
- (id)principleClassFromDictionary:;
+ (id)sharedInstance;
+ (id)initForPlugInKit;
@end
