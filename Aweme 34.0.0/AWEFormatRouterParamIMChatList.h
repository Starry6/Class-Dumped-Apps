@interface AWEFormatRouterParamIMChatList : JSONModel
@property (nonatomic) NSNumber cellOrder;
@property (nonatomic) NSString noticeType;
@property (nonatomic) NSNumber showCnt;
- (id)cellOrder;
- (id)showCnt;
- (void)setNoticeType:;
- (void)setCellOrder:;
- (void)setShowCnt:;
- (void).cxx_destruct;
- (id)noticeType;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
