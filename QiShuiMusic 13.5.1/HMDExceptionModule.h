@interface HMDExceptionModule : HMDBaseModule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataBaseTableMap;
- (void)setupModuleConfig;
- (BOOL)shouldCareEnableUpload:;
- (void)syncConfigToHermasEngine;
- (void)updateDomainConfig;
- (void)updateDoubleUploadConfig;
- (void)updateEncryptConfig;
- (void)updateModuleConfig:;
- (void)updateRemoteHermasConfig;
@end
