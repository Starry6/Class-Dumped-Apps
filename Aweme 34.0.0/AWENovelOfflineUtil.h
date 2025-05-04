@interface AWENovelOfflineUtil : BDNovelBaseOffline
- (id)dataFromPath:channel:;
- (id)dataFromPath:channel:accessKey:;
- (id)rootDirWithAccessKey:channel:;
- (id)rootDirWithChannel:;
- (id)defaultAccessKey;
- (void)syncResourceIfNeedWithChannel:completion:;
@end
