@interface FLEXSystemLogMessage : NSObject
@property (nonatomic) NSString sender;
@property (nonatomic) ^{__asl_object_s=} aslMessage;
@property (nonatomic) NSDate date;
@property (nonatomic) NSString messageText;
@property (nonatomic) q messageID;
- (id)initWithDate:sender:text:messageID:;
- (BOOL)isEqual:;
- (unsigned long long)hash;
- (id)description;
- (id)sender;
- (id)aslMessage;
- (id)date;
- (id)messageText;
- (long long)messageID;
- (void).cxx_destruct;
+ (id)logMessageFromASLMessage:;
+ (id)logMessageFromDate:text:;
@end
