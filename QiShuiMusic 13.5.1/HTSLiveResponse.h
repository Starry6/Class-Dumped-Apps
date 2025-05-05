@interface HTSLiveResponse : GPBMessage
@property (nonatomic) NSMutableArray messagesArray;
@property (nonatomic) Q messagesArray_Count;
@property (nonatomic) NSString cursor;
@property (nonatomic) q fetchInterval;
@property (nonatomic) q now;
@property (nonatomic) NSString internalExt;
@property (nonatomic) NSInteger fetchType;
@property (nonatomic) NSMutableDictionary routeParams;
@property (nonatomic) Q routeParams_Count;
@property (nonatomic) q heartbeatDuration;
@property (nonatomic) BOOL needAck;
@property (nonatomic) NSString pushServer;
@property (nonatomic) NSString liveCursor;
@property (nonatomic) BOOL historyNoMore;
@property (nonatomic) NSString proxyServer;
+ (id)descriptor;
@end
