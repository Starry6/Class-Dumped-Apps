@interface MEMessageAction : NSObject
@property (nonatomic) MEMessageActionDestination destination;
@property (nonatomic) q readStatus;
@property (nonatomic) MEMessageActionFlagChange flagChange;
@property (nonatomic) q messageColor;
- (id)destination;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)flagChange;
- (long long)readStatus;
- (id)initWithDestination:readStatus:flagChange:messageColor:;
- (long long)messageColor;
+ (BOOL)supportsSecureCoding;
+ (id)moveToTrashAction;
+ (id)moveToArchiveAction;
+ (id)moveToJunkAction;
+ (id)markAsReadAction;
+ (id)markAsUnreadAction;
+ (id)flagActionWithFlag:;
+ (id)setBackgroundColorActionWithColor:;
@end
