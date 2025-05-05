@interface HTSLiveMessage : GPBMessage
@property (nonatomic) NSString method;
@property (nonatomic) NSData payload;
@property (nonatomic) q msgId;
@property (nonatomic) NSInteger msgType;
@property (nonatomic) q offset;
@property (nonatomic) BOOL needWrdsStore;
@property (nonatomic) q wrdsVersion;
@property (nonatomic) NSString wrdsSubKey;
@property (nonatomic) NSMutableDictionary messageExtra;
@property (nonatomic) Q messageExtra_Count;
+ (id)descriptor;
@end
