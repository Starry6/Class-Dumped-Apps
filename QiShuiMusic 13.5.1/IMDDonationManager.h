@interface IMDDonationManager : NSObject
@property (nonatomic) NSFileManager fileManager;
- (id)fileManager;
- (id)init;
- (void)dealloc;
- (void)setFileManager:;
- (void).cxx_destruct;
- (void)copyGroupPhotoToExternalPathIfNecessary:chatGUID:attachmentFilepath:;
+ (id)sharedInstance;
@end
