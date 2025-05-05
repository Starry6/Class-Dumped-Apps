@interface IESLiveCommentActivityEmojiModel : NSObject
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSString idString;
@property (nonatomic) NSString activityName;
@property (nonatomic) HTSLiveImage tagImage;
@property (nonatomic) NSArray emojiArray;
@property (nonatomic) q insertToQuickEmojiNum;
- (id)emojiArray;
- (long long)insertToQuickEmojiNum;
- (void)setEmojiArray:;
- (void)setInsertToQuickEmojiNum:;
- (void)setTagImage:;
- (id)tagImage;
- (void)setStartTime:;
- (void)setEndTime:;
- (long long)startTime;
- (long long)endTime;
- (void).cxx_destruct;
- (id)idString;
- (id)activityName;
- (void)setActivityName:;
- (void)setIdString:;
@end
