@interface HMDOpenTracingModule : HMDBaseModule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataBaseTableMap;
- (void)dataDidReportSuccess:;
- (id)fetchDataFromDatabase;
- (void)setupModuleConfig;
- (void)syncConfigToHermasEngine;
- (void)updateDomainConfig;
- (void)updateDoubleUploadConfig;
- (void)updateEncryptConfig;
- (void)updateModuleConfig:;
- (void)updateRemoteHermasConfig;
- (id)init;
@end
