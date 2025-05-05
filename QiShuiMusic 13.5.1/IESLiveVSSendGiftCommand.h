@interface IESLiveVSSendGiftCommand : NSObject
@property (nonatomic) NSNumber giftID;
@property (nonatomic) q count;
@property (nonatomic) q groupCount;
@property (nonatomic) q sendType;
@property (nonatomic) HTSLiveUser toUser;
@property (nonatomic) NSNumber price;
@property (nonatomic) BOOL isPreviewCommand;
- (id)giftID;
- (BOOL)isPreviewCommand;
- (long long)sendType;
- (void)setGiftID:;
- (void)setIsPreviewCommand:;
- (void)setSendType:;
- (void)setToUser:;
- (void)setCount:;
- (void)setGroupCount:;
- (long long)groupCount;
- (void).cxx_destruct;
- (id)price;
- (long long)count;
- (void)setPrice:;
- (id)toUser;
@end
