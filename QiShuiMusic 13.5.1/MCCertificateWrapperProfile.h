@interface MCCertificateWrapperProfile : MCConfigurationProfile
- (BOOL)isSigned;
- (int)trustLevel;
- (id)stubDictionary;
- (id)initWithDictionary:signerCerts:allowEmptyPayload:outError:;
- (id)earliestCertificateExpiryDate;
- (id)_certificatePayload;
+ (id)_wrapperProfileDictForCertificate:fileName:certData:type:;
+ (id)_wrapperWAPIPayloadDictWithPEMData:fileName:name:identifier:;
+ (id)_wrapperProfileForWAPICertificate:fileName:PEMData:;
+ (id)wrapperProfileDictionaryWithCertificateData:fileName:outSignerCerts:;
+ (id)_wrapperPayloadDictWithCertData:fileName:name:identifier:type:;
+ (id)_basicWrapperProfileDictForCertificateName:fileName:identifier:;
+ (id)_identifierHashFromData:;
@end
