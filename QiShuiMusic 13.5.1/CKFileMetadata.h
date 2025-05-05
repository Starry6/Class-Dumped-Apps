@interface CKFileMetadata : NSObject
@property (nonatomic) NSNumber deviceID;
@property (nonatomic) NSNumber fileID;
@property (nonatomic) NSNumber generationID;
@property (nonatomic) NSNumber modTimeInSeconds;
@property (nonatomic) NSNumber fileSize;
- (id)fileSize;
- (id)fileID;
- (id)generationID;
- (id)initWithCoder:;
- (id)deviceID;
- (void)encodeWithCoder:;
- (void)setFileSize:;
- (void).cxx_destruct;
- (id)modTimeInSeconds;
+ (BOOL)supportsSecureCoding;
@end
