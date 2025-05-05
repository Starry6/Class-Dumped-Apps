@interface BMMicroLocationTruthTagEvent : NSObject
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) NSString clientBundleIdentifier;
@property (nonatomic) NSUUID truthTagIdentifier;
@property (nonatomic) NSUUID recordingRequestIdentifier;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clientBundleIdentifier;
- (id)initWithProtoData:;
- (id)proto;
- (id)encodeAsProto;
- (double)absoluteTimestamp;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)serialize;
- (BOOL)isEqual:;
- (id)truthTagIdentifier;
- (id)recordingRequestIdentifier;
- (id)initWithAbsoluteTimestamp:clientBundleIdentifier:truthTagIdentifier:recordingRequestIdentifier:;
+ (id)eventWithData:dataVersion:;
@end
