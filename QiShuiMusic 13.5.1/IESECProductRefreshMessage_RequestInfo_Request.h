@interface IESECProductRefreshMessage_RequestInfo_Request : GPBMessage
@property (nonatomic) NSString path;
@property (nonatomic) NSMutableDictionary params;
@property (nonatomic) Q params_Count;
@property (nonatomic) IESECDelayParam delayParam;
@property (nonatomic) BOOL hasDelayParam;
+ (id)descriptor;
@end
