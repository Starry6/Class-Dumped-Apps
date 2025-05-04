@interface AWEIMEmoticonReplyListSectionModel : NSObject
@property (nonatomic) AWEIMMessageEmoticonReplyViewModel replyViewModel;
@property (nonatomic) NSArray sectionArray;
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) BOOL selected;
- (id)sectionArray;
- (void)setSectionArray:;
- (id)replyViewModel;
- (void)setReplyViewModel:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (BOOL)selected;
- (void)setSelected:;
@end
