@interface EDAttachmentMetadata : NSObject
@property (nonatomic) NSNumber attachmentID;
@property (nonatomic) NSString attachmentHash;
@property (nonatomic) NSString nameOnDisk;
@property (nonatomic) NSNumber size;
@property (nonatomic) NSDate downloadDate;
@property (nonatomic) NSNumber viewCount;
@property (nonatomic) NSDate lastViewed;
@property (nonatomic) NSNumber viewCountByTapped;
- (id)viewCount;
- (void).cxx_destruct;
- (id)description;
- (id)size;
- (id)downloadDate;
- (id)attachmentID;
- (void)setAttachmentID:;
- (id)initWithAttachmentID:attachmentHash:nameOnDisk:size:downloadDate:viewCount:lastViewed:viewCountByTapped:;
- (id)initWithAttachmentHash:nameOnDisk:size:downloadDate:;
- (id)initWithAttachmentID:nameOnDisk:;
- (id)attachmentHash;
- (id)nameOnDisk;
- (id)lastViewed;
- (id)viewCountByTapped;
@end
