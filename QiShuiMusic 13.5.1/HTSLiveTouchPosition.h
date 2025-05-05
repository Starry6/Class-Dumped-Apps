@interface HTSLiveTouchPosition : IESLivePBBaseMessage
@property (nonatomic) HTSLiveTouchPositionMeta meta;
@property (nonatomic) BOOL hasMeta;
@property (nonatomic) HTSLiveTouchPositionDetail detail;
@property (nonatomic) BOOL hasDetail;
@property (nonatomic) NSMutableDictionary bizExtra;
@property (nonatomic) Q bizExtra_Count;
+ (id)descriptor;
@end
