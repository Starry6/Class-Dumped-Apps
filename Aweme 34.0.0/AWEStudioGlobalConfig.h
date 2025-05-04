@interface AWEStudioGlobalConfig : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldKeepLiveMode;
- (BOOL)supportEditWithPublish;
- (BOOL)shouldSyncToToutiaoAndXigua;
- (BOOL)shouldSupportSpecialPlusButton;
- (id)customProgressWeightDict:;
- (id)weakTarget;
+ (BOOL)isLite;
+ (Class)weakTargetClass;
+ (BOOL)supportEditWithPublish;
+ (id)extendBundleName;
+ (id)watermarkProductName;
+ (id)sharedInstance;
@end
