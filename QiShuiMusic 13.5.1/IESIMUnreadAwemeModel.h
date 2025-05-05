@interface IESIMUnreadAwemeModel : MTLModel
@property (nonatomic) q unreadCount;
@property (nonatomic) q lastestUnreadTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)lastestUnreadTime;
- (void)setLastestUnreadTime:;
- (long long)unreadCount;
- (void)setUnreadCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
