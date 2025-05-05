@interface DMCKeychain : NSObject
+ (id)_newQueryWithService:account:label:description:group:useSystemKeychain:outError:;
+ (BOOL)setData:forService:account:label:description:access:group:useSystemKeychain:sysBound:enforcePersonalPersona:outError:;
+ (id)dataFromService:account:label:description:group:useSystemKeychain:enforcePersonalPersona:outError:;
+ (void)removeItemForService:account:label:description:useSystemKeychain:enforcePersonalPersona:group:;
+ (id)copyItemWithPersistentID:useSystemKeychain:enforcePersonalPersona:;
+ (id)copyCertificateWithPersistentID:useSystemKeychain:enforcePersonalPersona:;
+ (id)copyIdentityWithPersistentID:useSystemKeychain:enforcePersonalPersona:;
+ (id)saveItem:withLabel:group:useSystemKeychain:enforcePersonalPersona:;
+ (id)stringFromServiceData:;
+ (id)dataFromString:;
+ (id)copyCertificatesWithPersistentIDs:useSystemKeychain:enforcePersonalPersona:;
+ (BOOL)storeAttestationKey:withGroup:label:;
+ (id)retrieveAttestationKeyWithGroup:label:;
+ (BOOL)deleteAttestationKeyWithGroup:label:;
+ (BOOL)storeAttestationCert:withGroup:label:;
+ (id)retrieveAttestationCertWithGroup:label:;
+ (BOOL)deleteAttestationCertWithGroup:label:;
+ (id)retrieveAttestationIdentityWithGroup:label:;
+ (BOOL)storeAttestationMetadata:withGroup:service:;
+ (id)retrieveAttestationMetadataWithGroup:service:;
+ (BOOL)deleteAttestationMetadataWithGroup:service:;
@end
