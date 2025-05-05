@interface PFUbiquitySafeSaveFile : NSObject
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)moveToPermanentLocation:;
- (BOOL)loadFileFromLocation:error:;
- (BOOL)writeFileToLocation:error:;
- (id)initWithPermanentLocation:safeSaveLocation:andLocalPeerID:;
- (BOOL)waitForFileToUpload:;
@end
