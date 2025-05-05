@interface AWENoticeRecallMessage : NSObject
@property (nonatomic) NSString groupId;
@property (nonatomic) NSString noticeId;
@property (nonatomic) NSString noticeMessage;
@property (nonatomic) NSString theNewNoticeMessage;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString aweDesc;
- (id)aweDesc;
- (id)noticeId;
- (id)noticeMessage;
- (void)setAweDesc:;
- (void)setNoticeId:;
- (void)setNoticeMessage:;
- (void)setTheNewNoticeMessage:;
- (id)theNewNoticeMessage;
- (id)desc;
- (id)initWithDictionary:;
- (void)setDesc:;
- (unsigned long long)hash;
- (id)groupId;
- (void).cxx_destruct;
- (void)setGroupId:;
- (BOOL)isEqual:;
@end
