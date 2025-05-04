@interface AWEProfileExtensionAreaReminderIconConfig : NSObject
@property (nonatomic) NSString dynamicText;
@property (nonatomic) NSArray imageURLArray;
@property (nonatomic) Q reminderIconType;
@property (nonatomic) @? completionBlock;
@property (nonatomic) Q iconStyle;
@property (nonatomic) BOOL needShowBorder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageURLArray;
- (void)setImageURLArray:;
- (void)setReminderIconType:;
- (id)dynamicText;
- (void)setDynamicText:;
- (void)setNeedShowBorder:;
- (unsigned long long)reminderIconType;
- (BOOL)needShowBorder;
- (id)init;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
- (unsigned long long)iconStyle;
- (void)setIconStyle:;
@end
