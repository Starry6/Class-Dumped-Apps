@interface HistoryTextItem : IESLivePBBaseMessage
@property (nonatomic) q userId;
@property (nonatomic) NSString userName;
@property (nonatomic) q textType;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
