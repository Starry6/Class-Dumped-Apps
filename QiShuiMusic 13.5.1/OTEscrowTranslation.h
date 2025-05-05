@interface OTEscrowTranslation : NSObject
+ (id)dictionaryToEscrowAuthenticationInfo:;
+ (id)escrowAuthenticationInfoToDictionary:;
+ (id)dictionaryToCDPRecoveryInformation:;
+ (id)cdpRecoveryInformationToDictionary:;
+ (id)_dateWithSecureBackupDateString:;
+ (id)_stringWithSecureBackupDate:;
+ (id)dictionaryToMetadata:;
+ (id)dictionaryToEscrowRecord:;
+ (id)metadataToDictionary:;
+ (id)escrowRecordToDictionary:;
+ (id)dictionaryToCDPRecordContext:;
+ (id)CDPRecordContextToDictionary:;
+ (BOOL)supportedRestorePath:;
@end
