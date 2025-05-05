@interface CHSSnapshotContext : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) CHSScreenshotPresentationAttributes attributes;
@property (nonatomic) NSString typeIdentifier;
@property (nonatomic) NSString contentIdentifier;
@property (nonatomic) BOOL needsCAPackage;
@property (nonatomic) BOOL fileExists;
- (id)url;
- (id)contentIdentifier;
- (BOOL)fileExists;
- (BOOL)needsCAPackage;
- (id)attributes;
- (id)typeIdentifier;
- (void).cxx_destruct;
- (id)initWithURL:attributes:fileManager:;
@end
