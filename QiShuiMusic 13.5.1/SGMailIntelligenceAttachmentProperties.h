@interface SGMailIntelligenceAttachmentProperties : NSObject
@property (nonatomic) NSString fileName;
@property (nonatomic) NSNumber fileSizeInBytes;
@property (nonatomic) NSString fileDescription;
@property (nonatomic) NSArray keywords;
@property (nonatomic) NSArray authors;
- (id)keywords;
- (id)fileName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)authors;
- (id)copyWithZone:;
- (id)initWithFileName:fileSizeInBytes:fileDescription:keywords:authors:;
- (id)fileSizeInBytes;
- (id)fileDescription;
+ (BOOL)supportsSecureCoding;
@end
