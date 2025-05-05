@interface HTSLiveTaskProps : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray elementlistPropsArray;
@property (nonatomic) Q elementlistPropsArray_Count;
@property (nonatomic) NSString className;
@property (nonatomic) NSString currentBgColor;
@property (nonatomic) NSString backGroundColor;
+ (id)descriptor;
@end
