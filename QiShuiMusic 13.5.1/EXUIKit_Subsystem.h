@interface EXUIKit_Subsystem : NSObject
@property (nonatomic) NSDictionary infoDictionary;
@property (nonatomic) BOOL plugInKitProcess;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)infoDictionary;
- (void)setPlugInKitProcess:;
- (void)beginUsing:withBundle:;
- (BOOL)isPlugInKitProcess;
- (void).cxx_destruct;
- (void)endUsing:;
- (void)setInfoDictionary:;
+ (id)sharedInstance;
+ (id)initForPlugInKit;
+ (id)initForPlugInKitWithOptions:;
@end
