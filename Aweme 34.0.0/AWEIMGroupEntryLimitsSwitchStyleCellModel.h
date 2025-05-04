@interface AWEIMGroupEntryLimitsSwitchStyleCellModel : NSObject
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) Q type;
@property (nonatomic) BOOL isOn;
@property (nonatomic) BOOL disableSwitch;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
- (id)descLabelSizeWithMaxWidth:;
- (id)attributedDescTextWithPreferredTheme:;
- (void)updateModelWithInfo:;
- (BOOL)disableSwitch;
- (void)setDisableSwitch:;
- (void)setDesc:;
- (unsigned long long)type;
- (id)desc;
- (BOOL)isOn;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)conversation;
- (void)setConversation:;
- (double)cellHeight;
- (void)setIsOn:;
+ (id)modelWithConversation:type:isOn:;
@end
