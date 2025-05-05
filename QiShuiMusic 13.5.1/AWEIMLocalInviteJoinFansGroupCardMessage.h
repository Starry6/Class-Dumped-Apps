@interface AWEIMLocalInviteJoinFansGroupCardMessage : AWEIMMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) q groupCount;
- (id)__displayInfo;
- (id)getContentDict;
- (id)initWithContentDict:;
- (void)updateTitle:subTitle:groupCount:;
- (void)setGroupCount:;
- (void)setTitle:;
- (long long)groupCount;
- (id)title;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)subTitle;
- (BOOL)shouldHide;
@end
