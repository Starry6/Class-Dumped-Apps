@interface CSJSecurityManager : NSObject
+ (id)v4Base64EncryptRequestWithRequestModel:adslot:rawReqbodyLength:;
+ (id)csj_requestHeaderWithV4Request:;
+ (id)biddingTokenWithParams:;
+ (id)csj_requestHeaderWithRequest:;
+ (id)csj_secGuardBodyDataWithRequest:;
+ (unsigned long long)cypherVersionWithRequest:;
+ (id)encryptBiddingRequestModel:adslot:cypherVersion:rawReqbodyLength:;
+ (id)encryptRequestDictionary:cypherVersion:rawReqbodyLength:;
+ (id)encryptRequestDictionaryWithDoor::;
+ (id)encryptRequestDictionaryWithOutSign:cypherVersion:rawReqbodyLength:;
+ (id)encryptRequestModel:adslot:cypherVersion:rawReqbodyLength:;
+ (BOOL)isOctetStreamResponse:;
+ (long long)reqBodyLengthWithParam:cypherVesion:;
+ (id)v4Base64EncryptRequestDictionary:rawReqbodyLength:;
+ (id)v4Base64EncryptRequestDictionaryWithOutSign:rawReqbodyLength:;
+ (id)v4Base64EncryptString:;
+ (id)v4EncryptRequestDictionary:;
+ (id)v4EncryptRequestDictionary:rawReqbodyLength:;
+ (id)v4EncryptRequestDictionaryWithGZip:;
+ (id)v4EncryptRequestDictionaryWithOutSign:rawReqbodyLength:;
+ (id)v4EncryptRequestWithRequestModel:adslot:rawReqbodyLength:;
+ (id)v4EncryptString:;
@end
