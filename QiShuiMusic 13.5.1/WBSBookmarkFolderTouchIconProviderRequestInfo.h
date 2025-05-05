@interface WBSBookmarkFolderTouchIconProviderRequestInfo : NSObject
@property (nonatomic) NSSet subrequestTokens;
@property (nonatomic) NSArray thumbnailImages;
@property (nonatomic) NSArray backgroundColors;
@property (nonatomic) BOOL hasScheduledCoalescedUpdate;
- (id)init;
- (void)setThumbnailImage:atIndex:;
- (void)setBackgroundColor:atIndex:;
- (BOOL)hasScheduledCoalescedUpdate;
- (void)setSubrequestTokens:;
- (id)subrequestTokens;
- (id)backgroundColors;
- (void).cxx_destruct;
- (id)thumbnailImages;
- (void)setHasScheduledCoalescedUpdate:;
@end
