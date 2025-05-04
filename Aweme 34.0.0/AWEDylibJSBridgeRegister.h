@interface AWEDylibJSBridgeRegister : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)registerDylibJSBridge:;
+ (void)registerAWEJS2NativeHandler:;
+ (void)registerDylibLynxBridge:;
+ (void)ensureSegmentInfoLoaded;
+ (id)sharedInstance;
@end
