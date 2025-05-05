@interface DSArchivedItemDescriptor : NSObject
@property (nonatomic) NSString filePath;
@property (nonatomic) NSNumber fileSize;
@property (nonatomic) NSString typeIdentifier;
- (id)filePath;
- (id)fileSize;
- (void)setFilePath:;
- (id)initWithCoder:;
- (void)setTypeIdentifier:;
- (id)typeIdentifier;
- (void)encodeWithCoder:;
- (void)setFileSize:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
