@interface CPLResourceIdentityImplementation : CPLResourceIdentity
- (id)identityForStorage;
+ (id)identityFromStoredIdentity:;
+ (BOOL)isValidMMCSV2Signature:;
+ (id)extensionForFileUTI:;
+ (id)zeroByteFileFingerPrint;
+ (id)storageNameForFingerPrint:fileUTI:bucket:;
+ (id)fingerPrintForData:error:;
+ (id)fingerPrintForFD:error:;
+ (id)identityForStorageName:;
+ (id)_fingerPrintForFD:error:;
+ (void)setMMCImplementationForPlatform:;
+ (id)fileUTIForExtension:;
+ (id)fingerPrintForFileAtURL:error:;
@end
