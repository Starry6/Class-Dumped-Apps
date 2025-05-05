@interface BDATMAssembleTool : NSObject
+ (id)assembleContentParams:withDynamicParams:;
+ (id)assembleOriginParams:withContentParams:;
+ (id)assembleOriginParams:withExtraParams:;
+ (id)assembleParams:withCommonParams:withDynamicParams:;
+ (id)assembleUnitContentParams:withDynamicParams:;
+ (id)removeParams:withOriginParams:;
@end
