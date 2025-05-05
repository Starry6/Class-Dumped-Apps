@interface HTSLiveShelfSupplementInfo : IESLivePBBaseMessage
@property (nonatomic) NSString context;
@property (nonatomic) NSString typeStr;
@property (nonatomic) q amount;
@property (nonatomic) NSMutableArray userImgArray;
@property (nonatomic) Q userImgArray_Count;
+ (id)descriptor;
@end
