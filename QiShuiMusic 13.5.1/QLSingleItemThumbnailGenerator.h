@interface QLSingleItemThumbnailGenerator : NSObject
@property (nonatomic) QLItemThumbnailGenerator thumbnailGenerator;
@property (nonatomic) QLItem item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)item;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)initWithItem:;
- (id)thumbnailGenerator;
- (void)setThumbnailGenerator:;
- (void)generateThumbnailWithSize:completionBlock:;
- (id)genericIconWithSize:;
- (void)_provideThumbnailForUbiquitousURLWithSize:completionBlock:;
- (void)_handleThumbnailGenerationFinishedWithThumbnail:size:clientCompletionBlock:;
+ (BOOL)supportsSecureCoding;
@end
