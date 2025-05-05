@interface IESLiveSaaSPBMessage : GPBMessage
@property (nonatomic) NSString method;
@property (nonatomic) NSData payload;
@property (nonatomic) q msgId;
@property (nonatomic) NSInteger msgType;
+ (id)descriptor;
@end
