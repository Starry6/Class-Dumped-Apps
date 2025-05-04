@interface AWEIMWidgetGuideDemoteHelper : NSObject
@property (nonatomic) NSString conversationId;
@property (nonatomic) Q style;
@property (nonatomic) q maxCountIn24;
@property (nonatomic) q maxShowCount;
@property (nonatomic) q exitDay;
- (void)setMaxShowCount:;
- (void)markShow;
- (long long)exitDay;
- (void)setExitDay:;
- (long long)maxShowCount;
- (id)initWithIMConversationId:style:;
- (void)markDismissWithoutClick;
- (BOOL)canShowByFrequencyLimit;
- (void)updateCurrentDateToDateArrayWithStorageKey:;
- (id)getDateArrayWithStorageKey:;
- (void)storeDateArray:storageKey:;
- (id)getUidStorageKeyWithKey:;
- (void)readConfifWithStyle:;
- (long long)maxCountIn24;
- (void)setMaxCountIn24:;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)setStyle:;
- (id)conversationId;
- (void)setConversationId:;
@end
