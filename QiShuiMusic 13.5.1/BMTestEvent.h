@interface BMTestEvent : BMEventBase
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)content;
- (id)initWithCoder:;
- (unsigned int)dataVersion;
- (void)encodeWithCoder:;
- (id)serialize;
- (id)initWithData:dataVersion:;
- (id)initWithContent:dataVersion:;
- (BOOL)checkAndReportDecodingFailureIfNeededForuint32_t:key:coder:errorDomain:errorCode:;
+ (id)eventWithData:dataVersion:;
+ (BOOL)supportsSecureCoding;
@end
