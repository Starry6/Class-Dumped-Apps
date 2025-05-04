@interface AWENoticeRecallMessage : NSObject
@property (nonatomic) NSString groupId;
@property (nonatomic) NSString noticeId;
@property (nonatomic) NSString noticeMessage;
@property (nonatomic) NSString theNewNoticeMessage;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString aweDesc;
- (id)noticeId;
- (void)setNoticeId:;
- (id)theNewNoticeMessage;
- (id)noticeMessage;
- (void)setNoticeMessage:;
- (void)setTheNewNoticeMessage:;
- (void)setAweDesc:;
- (id)aweDesc;
- (void)setGroupId:;
- (id)groupId;
- (unsigned long long)hash;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithDictionary:;
@end
