@interface SAPhoneHangUpResponse : SABaseCommand
@property (nonatomic) BOOL activeCallRemaining;
@property (nonatomic) NSString phoneHangUpCallType;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)activeCallRemaining;
- (void)setActiveCallRemaining:;
- (id)phoneHangUpCallType;
- (void)setPhoneHangUpCallType:;
+ (id)hangUpResponse;
+ (id)hangUpResponseWithDictionary:context:;
@end
