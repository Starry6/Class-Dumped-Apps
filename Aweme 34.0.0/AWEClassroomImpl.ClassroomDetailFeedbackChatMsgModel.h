@interface AWEClassroomImpl.ClassroomDetailFeedbackChatMsgModel : MTLModel
@property (nonatomic) BOOL unread;
- (id)initWithDictionary:error:;
- (void)setUnread:;
- (id)init;
- (id)initWithCoder:;
- (BOOL)unread;
+ (id)JSONKeyPathsByPropertyKey;
@end
