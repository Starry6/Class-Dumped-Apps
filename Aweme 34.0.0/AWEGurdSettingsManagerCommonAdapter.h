@interface AWEGurdSettingsManagerCommonAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupNamesArrayForRequestBlocklist;
- (id)poiGroupNamesArrayForRequestBlocklist;
- (id)channelsArrayForRequestBlocklist;
- (BOOL)useZstd;
- (id)weakTarget;
+ (Class)weakTargetClass;
+ (void)aweGurdSettingsCacheManagerInjectJSONObjectWithDataFunction;
@end
