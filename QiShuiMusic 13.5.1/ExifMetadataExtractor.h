@interface ExifMetadataExtractor : NSObject
@property (nonatomic) NSURL inFileURL;
@property (nonatomic) NSMutableArray desiredExifKeysArray;
@property (nonatomic) NSMutableDictionary metadataDictionary;
@property (nonatomic) NSMutableArray facesArray;
@property (nonatomic) BOOL hadAllRequestedKeys;
@property (nonatomic) BOOL saveAllMetadata;
@property (nonatomic) NSDictionary allMetadata;
- (id)init;
- (id)metadataDictionary;
- (void).cxx_destruct;
- (id)allMetadata;
- (id)facesArray;
- (BOOL)keyIsDesired:;
- (void)performCorrectionsOnDictionary:;
- (BOOL)CopyFromMakerMediaDict:toDict:;
- (void)CopyFacesDataFromAuxDictionary:toArray:;
- (BOOL)copyKeysFromDictionary:;
- (short)processFile;
- (id)inFileURL;
- (void)setInFileURL:;
- (id)desiredExifKeysArray;
- (void)setDesiredExifKeysArray:;
- (BOOL)hadAllRequestedKeys;
- (BOOL)saveAllMetadata;
- (void)setSaveAllMetadata:;
@end
