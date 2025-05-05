@interface FLLoggingContext : NSObject
@property (nonatomic) NSString timestampReferenceIdentifier;
@property (nonatomic) NSFileManager fileManager;
@property (nonatomic) Q now;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSUserDefaults userDefaults;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)now;
- (id)fileManager;
- (id)init;
- (id)userDefaults;
- (void)setFileManager:;
- (void).cxx_destruct;
- (id)initWithFileManager:;
- (id)queue;
- (id)timestampReferenceIdentifier;
- (void)setTimestampReferenceIdentifier:;
- (void)reportTelemetry:payload:;
@end
