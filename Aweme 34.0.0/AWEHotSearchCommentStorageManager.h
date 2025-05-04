@interface AWEHotSearchCommentStorageManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)cleanCommentsWithHotSpotID:;
+ (void)addComment:hotSpotID:;
+ (void)removeComment:hotSpotID:;
+ (id)commentModelsHotSpotID:;
+ (void)addRemovedComment:hotSpotID:;
+ (BOOL)hasRecordHotSpotID:;
+ (id)getStorageKey:;
+ (BOOL)isCommentExpired:;
+ (id)removeComments;
+ (void)removeAllCommentHotSpotID:;
+ (id)diskStorage;
@end
