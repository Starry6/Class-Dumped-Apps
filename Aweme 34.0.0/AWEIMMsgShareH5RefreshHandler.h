@interface AWEIMMsgShareH5RefreshHandler : AWEIMMsgBaseRefreshHandler
@property (nonatomic) Q requestInterval;
@property (nonatomic) <AWEIMMessageListComponentCenter> componentCenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)supportRefreshMessage:;
- (BOOL)supportRefreshStrategy:;
- (void)refrshResourceStateFor:forViewModels:strategy:;
+ (BOOL)supportRefresh;
+ (long long)getRefreshHandlerType;
+ (id)getTitle:;
+ (void)setTitle:uniqueId:;
+ (void)setCoverURL:uniqueId:;
+ (void)setDesc:uniqueId:;
+ (void)setUIExtra:uniqueId:;
+ (id)getCoverURL:;
+ (id)getDesc:;
+ (void)setTitleColor:uniqueId:;
+ (id)getTitleColor:;
+ (void)setDescColor:uniqueId:;
+ (id)getDescColor:;
+ (id)getUIExtra:;
@end
