@interface HTSLivePrecisionMatch_Matcher : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
@property (nonatomic) HTSLiveRoom room;
@property (nonatomic) BOOL hasRoom;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSMutableArray tagsArray;
@property (nonatomic) Q tagsArray_Count;
@property (nonatomic) NSString descText;
+ (id)descriptor;
@end
