@interface SAMPGeniusSummonFailed : SABaseCommand
@property (nonatomic) q errorCode;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)initWithReason:;
- (long long)errorCode;
- (id)reason;
- (BOOL)requiresResponse;
- (void)setReason:;
- (id)encodedClassName;
- (void)setErrorCode:;
- (id)initWithErrorCode:;
+ (id)geniusSummonFailed;
+ (id)geniusSummonFailedWithDictionary:context:;
+ (id)geniusSummonFailedWithErrorCode:;
+ (id)geniusSummonFailedWithReason:;
@end
