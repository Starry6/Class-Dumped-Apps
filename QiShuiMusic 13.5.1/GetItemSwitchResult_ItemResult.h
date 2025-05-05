@interface GetItemSwitchResult_ItemResult : IESLivePBBaseMessage
@property (nonatomic) NSString key;
@property (nonatomic) BOOL value;
+ (id)descriptor;
@end
