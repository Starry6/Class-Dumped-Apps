@interface OSASafeCreateDirectoryOptions : NSObject
@property (nonatomic) BOOL createIntermediates;
@property (nonatomic) NSNumber userID;
@property (nonatomic) NSNumber groupID;
@property (nonatomic) BOOL fileProtectionNone;
- (void)setGroupID:;
- (id)groupID;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
- (BOOL)createIntermediates;
- (void)setCreateIntermediates:;
- (BOOL)fileProtectionNone;
- (void)setFileProtectionNone:;
@end
