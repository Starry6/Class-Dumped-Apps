@interface PLCloudSharedComment : PLManagedObject
@property (nonatomic) NSString cloudGUID;
@property (nonatomic) NSString commenterHashedPersonID;
@property (nonatomic) NSNumber isDeletable;
@property (nonatomic) NSNumber isLike;
@property (nonatomic) NSNumber isCaption;
@property (nonatomic) NSNumber isBatchComment;
@property (nonatomic) NSNumber isMyComment;
@property (nonatomic) NSString commentText;
@property (nonatomic) NSDate commentDate;
@property (nonatomic) NSDate commentClientDate;
@property (nonatomic) PLManagedAsset commentedAsset;
@property (nonatomic) PLManagedAsset likedAsset;
@property (nonatomic) PLCloudFeedCommentsEntry cloudFeedCommentEntry;
@property (nonatomic) PLCloudFeedCommentsEntry cloudFeedLikeCommentEntry;
@property (nonatomic) BOOL isLikeBoolValue;
@property (nonatomic) NSString commenterEmail;
@property (nonatomic) NSString commenterFirstName;
@property (nonatomic) NSString commenterLastName;
@property (nonatomic) NSString commenterFullName;
@property (nonatomic) PLCloudFeedCommentsEntry cloudFeedEntry;
@property (nonatomic) NSString commentType;
- (void)performDelete;
- (id)init;
- (void)willSave;
- (id)asset;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (BOOL)shouldNotifyAsNotificationWithMediaStreamInfo:asCaptionOnly:;
- (BOOL)isInterestingForAlbumsSorting;
- (id)commenterDisplayName;
- (id)commenterEmail;
- (id)commenterFirstName;
- (id)commenterLastName;
- (id)commenterFullName;
- (BOOL)canBeDeletedByUser;
- (BOOL)_isInterestingToUser;
- (id)cloudFeedEntry;
- (BOOL)isLikeBoolValue;
- (BOOL)matchesCommentText:isLike:;
+ (id)entityName;
+ (id)insertNewCommentIntoAsset:commentDate:withText:isLike:isMyComment:inLibrary:;
+ (id)_cloudSharedCommentsWithPredicate:inManagedObjectContext:;
+ (id)cloudSharedCommentsWithGUIDs:inLibrary:;
+ (id)cloudSharedCommentWithGUID:inLibrary:;
+ (id)cloudSharedCommentsWithCommentDate:inManagedObjectContext:;
@end
