@interface GestaltHlprMobileActivation : NSObject
- (id)copyAnswer:;
- (BOOL)getBoolAnswer:;
- (void)addAGestaltKey:toDictionary:required:errors:;
- (id)copyDeviceIDInfo:;
- (id)copyDeviceInfo:;
- (id)copyRegulatoryImagesInfo:;
- (void)updateRecertInfo:errors:;
+ (id)getSharedInstance;
@end
