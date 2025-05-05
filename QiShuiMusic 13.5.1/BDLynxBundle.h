@interface BDLynxBundle : NSObject
@property (nonatomic) NSURL singleFilePath;
@property (nonatomic) NSURL rootDirURL;
@property (nonatomic) BDLyxnChannelConfig channelConfig;
@property (nonatomic) NSString version;
@property (nonatomic) NSString groupID;
@property (nonatomic) BOOL isSingleFile;
@property (nonatomic) NSString storagePath;
- (id)initWithBundlePath:group:error:;
- (BOOL)updateDataWithSingleBundleFile:;
- (id)channelConfig;
- (id)initWithRootDir:groupID:;
- (id)initWithSingleBundleFileURL:groupID:;
- (BOOL)isSingleFile;
- (id)lynxCardDataWithCardID:;
- (id)lynxDataWithCardID:;
- (id)lynxExtraDataWithCardID:;
- (id)rootDirURL;
- (void)setChannelConfig:;
- (void)setRootDirURL:;
- (void)setSingleFilePath:;
- (id)singleFilePath;
- (BOOL)updateDataWithRootDir:;
- (id)storagePath;
- (id)groupID;
- (id)version;
- (void).cxx_destruct;
- (void)setStoragePath:;
@end
