@interface IESECLiveRoomParamsBuilder : NSObject
+ (id)p_validatePassthroughLogData:fixExtraBusiness:originRoomParams:;
+ (id)ecomLiveParamsFromRoomContextParams:;
+ (id)jumpSchemaFromEComLiveParams:;
+ (void)p_filterEcomLiveParams:;
+ (id)p_jumpSchemaWithType:productID:promotionID:passthroughParams:;
+ (id)p_passthroughParamsForOpenPageFromEComLiveParms:;
+ (void)p_refillEComLiveParams:;
+ (id)p_removeAndReturnExtraBusinessParams:originRoomParams:;
+ (id)p_removePassthroughLogDataSensitiveParams:;
+ (id)p_schemaWithHost:path:originParams:;
+ (id)p_validateEComLiveParams:;
+ (id)validateRoomParamsBeforeEnter:;
@end
