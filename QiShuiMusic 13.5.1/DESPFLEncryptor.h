@interface DESPFLEncryptor : NSObject
@property (nonatomic) @? privatizerWithCustomParameters;
@property (nonatomic) @? privatizer;
@property (nonatomic) BOOL pluginShouldAddNoiseAndEncryptResult;
@property (nonatomic) BOOL writeToSubmissionLogs;
@property (nonatomic) NSString privatizationIdentifier;
@property (nonatomic) q version;
@property (nonatomic) double weight;
- (id)initWithRecipe:;
- (id)init;
- (double)weight;
- (void)setVersion:;
- (long long)version;
- (void)setWeight:;
- (void).cxx_destruct;
- (id)initWithRecipeUserInfo:;
- (BOOL)pluginShouldAddNoiseAndEncryptResult;
- (id)initWithRecipeUserInfo:writeToSubmissionLogs:;
- (id)encryptedAndPrivatizedDataWithPublicKey:numbers:count:error:;
- (id)encryptedAndPrivatizedDataWithPublicKey:inPlaceNumbers:count:error:;
- (id)encryptAndPrivatizeDataWithRecipe:numbers:count:inPlace:error:;
- (id)_encryptedAndPrivatizedDataWithPublicKey:separatedDPParameter:inPlaceNumbers:count:error:;
- (id)encryptedDataWithPublicKey:dataNumbers:count:error:;
- (id)encryptedDataWithPublicKey:dataFloatNumbers:count:error:;
- (id)encryptedDataWithPublicKey:inPlaceDataNumbers:count:error:;
- (id)encryptedDataWithPublicKey:inPlaceDataFloatNumbers:count:error:;
- (id)_encryptedDataWithPublicKey:inPlaceDataFloatNumbers:count:error:;
- (id)_encryptedDataWithPublicKey:noiseable:error:;
- (id)encryptedDataWithPublicKey:data:error:;
- (id)_newNoiseable;
- (id)_requestedTransport;
- (void)_maybeQuantizeDataTransportOfNoisable:;
- (id)privatizationIdentifier;
- (void)setPrivatizationIdentifier:;
- (id)privatizerWithCustomParameters;
- (void)setPrivatizerWithCustomParameters:;
- (id)privatizer;
- (void)setPrivatizer:;
- (BOOL)writeToSubmissionLogs;
+ (BOOL)privatizationSupported;
@end
