@interface AWEOrdersPrompt : NSObject
@property (nonatomic) q orderState;
@property (nonatomic) NSString toastContent;
@property (nonatomic) q updateTime;
@property (nonatomic) q tabID;
@property (nonatomic) NSString orderListSchema;
@property (nonatomic) NSString UID;
- (id)toastContent;
- (void)setToastContent:;
- (void)setTabID:;
- (id)orderListSchema;
- (void)setOrderListSchema:;
- (id)UID;
- (void)encodeWithCoder:;
- (long long)updateTime;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setUpdateTime:;
- (void)setUID:;
- (long long)tabID;
- (long long)orderState;
- (void)setOrderState:;
@end
