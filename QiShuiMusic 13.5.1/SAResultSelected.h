@interface SAResultSelected : SABaseCommand
@property (nonatomic) NSNumber isMitigated;
@property (nonatomic) NSNumber processedAudioDuration;
@property (nonatomic) NSString resultId;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)resultId;
- (void)setResultId:;
- (id)processedAudioDuration;
- (void)setProcessedAudioDuration:;
- (id)isMitigated;
- (void)setIsMitigated:;
+ (id)resultSelected;
+ (id)resultSelectedWithDictionary:context:;
@end
