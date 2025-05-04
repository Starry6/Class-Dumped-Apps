@interface AWEStudioAwemeDownloadConfig : NSObject
@property (nonatomic) NSString draftFolderPath;
@property (nonatomic) <AWEStudioAwemeModelProtocol> aweme;
@property (nonatomic) AWEStudioAwemeDownloadTask task;
- (id)aweme;
- (void)setAweme:;
- (void)setDraftFolderPath:;
- (id)draftFolderPath;
- (void)setTask:;
- (id)task;
- (void).cxx_destruct;
@end
