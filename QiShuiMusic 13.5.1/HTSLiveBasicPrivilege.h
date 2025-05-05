@interface HTSLiveBasicPrivilege : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSMutableArray emojiListArray;
@property (nonatomic) Q emojiListArray_Count;
+ (id)descriptor;
@end
