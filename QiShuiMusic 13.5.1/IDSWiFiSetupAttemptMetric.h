@interface IDSWiFiSetupAttemptMetric : NSObject
@property (nonatomic) Q attemptType;
@property (nonatomic) Q msDuration;
@property (nonatomic) Q result;
@property (nonatomic) NSString client;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)result;
- (id)client;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (id)initWithAttemptType:msDuration:result:client:;
- (unsigned long long)attemptType;
- (unsigned long long)msDuration;
@end
