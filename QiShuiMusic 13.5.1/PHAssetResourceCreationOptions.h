@interface PHAssetResourceCreationOptions : NSObject
@property (nonatomic) NSDate alternateImportImageDate;
@property (nonatomic) BOOL shouldIngestInPlace;
@property (nonatomic) NSInteger burstPickType;
@property (nonatomic) NSString forcePairingIdentifier;
@property (nonatomic) NSString originalFilename;
@property (nonatomic) NSString uniformTypeIdentifier;
@property (nonatomic) BOOL shouldMoveFile;
- (void)setUniformTypeIdentifier:;
- (id)uniformTypeIdentifier;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:;
- (id)originalFilename;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)alternateImportImageDate;
- (void)setAlternateImportImageDate:;
- (int)burstPickType;
- (BOOL)ensureOptionsAreCompleteForURL:;
- (void)setBurstPickType:;
- (void)setOriginalFilename:;
- (BOOL)shouldMoveFile;
- (void)setShouldMoveFile:;
- (BOOL)shouldIngestInPlace;
- (void)setShouldIngestInPlace:;
- (id)forcePairingIdentifier;
- (void)setForcePairingIdentifier:;
@end
