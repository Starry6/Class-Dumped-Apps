@interface BDXBridgeReportAppLogMethod : BDXBridgeMethod
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (id)methodName;
+ (BOOL)allowBackgroundThreadCall;
+ (id)metaInfo;
@end
