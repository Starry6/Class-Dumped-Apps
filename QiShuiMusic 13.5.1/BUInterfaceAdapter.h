@interface BUInterfaceAdapter : NSObject
+ (BOOL)ExecuteGroMoreLogic:extraData:;
+ (Class)adapterWithOriginalClass:;
+ (Class)adapterWithOriginalClass:extraData:;
+ (id)getConversionWithOriginalClass:extraData:;
+ (BOOL)isGroMoreObject:;
+ (BOOL)isMediationId:;
@end
