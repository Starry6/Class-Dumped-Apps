@interface AWEIMStrangerQuickReceiveMsgViewModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) q itemType;
@property (nonatomic) Q actionType;
@property (nonatomic) q closeDay;
@property (nonatomic) BOOL checked;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)trackStatusString;
- (long long)closeDay;
- (void)setCloseDay:;
- (long long)itemType;
- (unsigned long long)actionType;
- (void)setActionType:;
- (void)setItemType:;
- (void)setChecked:;
- (BOOL)checked;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)tipTitle;
- (id)requestParams;
- (id)initWithItemType:;
@end
