@interface UIKit_PKSubsystem : NSObject
@property (nonatomic) NSDictionary infoDictionary;
@property (nonatomic) BOOL plugInKitProcess;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)infoDictionary;
- (void)dealloc;
- (void)setPlugInKitProcess:;
- (void)beginUsing:withBundle:;
- (BOOL)isPlugInKitProcess;
- (void)endUsing:;
- (void)setInfoDictionary:;
+ (id)sharedInstance;
+ (id)initForPlugInKit;
+ (id)initForPlugInKitWithOptions:;
@end
