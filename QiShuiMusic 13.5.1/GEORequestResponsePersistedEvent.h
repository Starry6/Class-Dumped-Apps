@interface GEORequestResponsePersistedEvent : NSObject
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSInteger eventType;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSURL serviceURL;
@property (nonatomic) Q size;
@property (nonatomic) NSURL eventFileURL;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) GEORRRequestResponseEvent rrEvent;
@property (nonatomic) NSData rawMessage;
@property (nonatomic) PBCodable decodedMessage;
- (int)messageType;
- (id)identifier;
- (id)serviceURL;
- (int)eventType;
- (id)errorMessage;
- (void).cxx_destruct;
- (id)timestamp;
- (id)rawMessage;
- (unsigned long long)size;
- (id)rrEvent;
- (id)decodedMessage;
- (id)eventFileURL;
+ (id)enumeratorBlockHelper:;
@end
