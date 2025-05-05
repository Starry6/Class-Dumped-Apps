@interface MFDAFolderChangeResult : NSObject
@property (nonatomic) q statusCode;
@property (nonatomic) NSError error;
@property (nonatomic) NSString folderID;
@property (nonatomic) NSString folderName;
- (long long)statusCode;
- (BOOL)wasSuccessful;
- (id)error;
- (id)folderID;
- (void).cxx_destruct;
- (id)description;
- (id)folderName;
- (id)initWithStatusCode:error:folderID:folderName:;
@end
