@interface IESMetadataStorageInfo : NSObject
@property (nonatomic) NSInteger version;
@property (nonatomic) BOOL shouldResetFile;
@property (nonatomic) BOOL checkDuplicatedMetadatas;
- (BOOL)shouldResetFile;
- (BOOL)checkDuplicatedMetadatas;
- (void)setCheckDuplicatedMetadatas:;
- (void)setShouldResetFile:;
- (void)setVersion:;
- (int)version;
- (void)setupWithDictionary:;
- (id)binaryData;
+ (id)defaultInfo;
+ (id)infoWithData:;
@end
