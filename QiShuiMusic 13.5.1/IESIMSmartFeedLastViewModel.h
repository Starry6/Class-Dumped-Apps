@interface IESIMSmartFeedLastViewModel : IESIMBaseApiModel
@property (nonatomic) q index;
@property (nonatomic) NSString message;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString emptyMsg;
@property (nonatomic) NSString emptyButtonMsg;
@property (nonatomic) NSString itemID;
- (id)emptyButtonMsg;
- (id)emptyMsg;
- (void)setEmptyButtonMsg:;
- (void)setEmptyMsg:;
- (void)setMessage:;
- (id)itemID;
- (void)setSubtitle:;
- (void)setItemID:;
- (long long)index;
- (id)message;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)subtitle;
+ (id)JSONKeyPathsByPropertyKey;
@end
