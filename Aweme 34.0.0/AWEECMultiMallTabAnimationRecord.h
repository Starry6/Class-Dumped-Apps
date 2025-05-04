@interface AWEECMultiMallTabAnimationRecord : NSObject
@property (nonatomic) NSString tabId;
@property (nonatomic) NSArray showTimeSecArray;
- (id)showTimeSecArray;
- (void)setShowTimeSecArray:;
- (void)recordShow;
- (void)refreshShowTimes;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)setTabId:;
- (id)tabId;
+ (id)recordWithTabId:;
@end
