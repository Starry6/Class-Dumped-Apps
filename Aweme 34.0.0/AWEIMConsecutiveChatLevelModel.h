@interface AWEIMConsecutiveChatLevelModel : NSObject
@property (nonatomic) NSString levelStr;
@property (nonatomic) NSString dateStr;
- (id)levelStr;
- (id)initWithLevelStr:dateStr:;
- (id)initWithInfoStr:;
- (void)setLevelStr:;
- (id)dateStr;
- (void)setDateStr:;
- (void).cxx_destruct;
+ (id)preferredLevelStringWithCon:;
@end
