@interface PLCPLPlistHandler : NSObject
+ (id)_readCPLPlistWithPathManager:;
+ (id)readCPLPlistObjectWithKey:pathManager:;
+ (id)_cplPlistURLWithPathManager:verb:;
+ (void)deleteCPLPlistWithPathManager:;
+ (BOOL)CPLPlistFileExistsWithPathManager:;
+ (void)saveCPLPlistObject:forKey:pathManager:;
@end
