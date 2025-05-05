@interface HTSLiveUMGWFetchResponse : GPBMessage
@property (nonatomic) NSMutableArray businessDataArray;
@property (nonatomic) Q businessDataArray_Count;
@property (nonatomic) HTSLiveUMGWConnectionInfo connectionInfo;
@property (nonatomic) BOOL hasConnectionInfo;
@property (nonatomic) NSString umgwGlobalExt;
+ (id)descriptor;
@end
