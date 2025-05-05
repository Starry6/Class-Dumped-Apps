@interface IESECLiveSchemaFactory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)liveSchemaWithBase:query:openSchema:;
+ (id)p_updateEcomLiveParams:byParams:;
+ (id)validEcomLiveParamsStr:logExtra:;
@end
