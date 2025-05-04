@interface AWEInterestDiscoverBarBanModel : NSObject
@property (nonatomic) NSNumber showTime;
@property (nonatomic) NSNumber lastClickTimestamp;
@property (nonatomic) NSNumber lastShowTimestamp;
@property (nonatomic) NSNumber banTimestamp;
- (id)showTime;
- (void)setShowTime:;
- (id)lastClickTimestamp;
- (void)setLastClickTimestamp:;
- (id)lastShowTimestamp;
- (void)setLastShowTimestamp:;
- (id)banTimestamp;
- (void)setBanTimestamp:;
- (id)init;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)initWithCoder:;
- (id)copyWithZone:;
@end
