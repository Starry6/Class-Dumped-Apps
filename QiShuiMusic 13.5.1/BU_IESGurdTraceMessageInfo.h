@interface BU_IESGurdTraceMessageInfo : NSObject
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString message;
@property (nonatomic) BOOL hasError;
- (void)setChannel:;
- (BOOL)hasError;
- (id)channel;
- (void)setMessage:;
- (void)setHasError:;
- (id)message;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
+ (id)messageInfoWithAccessKey:channel:message:hasError:;
@end
