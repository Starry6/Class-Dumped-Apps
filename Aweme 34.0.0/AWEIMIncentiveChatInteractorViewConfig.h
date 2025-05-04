@interface AWEIMIncentiveChatInteractorViewConfig : NSObject
@property (nonatomic) AWEIMConversationContext context;
@property (nonatomic) NSString titleStr;
@property (nonatomic) BOOL hasBackgroundImg;
@property (nonatomic) NSString btnStr;
- (BOOL)hasBackgroundImg;
- (id)titleStr;
- (void)setTitleStr:;
- (void)setBtnStr:;
- (void)setHasBackgroundImg:;
- (id)btnStr;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
