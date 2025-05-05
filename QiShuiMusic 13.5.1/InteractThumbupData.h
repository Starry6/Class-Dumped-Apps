@interface InteractThumbupData : IESLivePBBaseMessage
@property (nonatomic) NSString scene;
@property (nonatomic) InteractThumbupData_ThumbupArgs params;
@property (nonatomic) BOOL hasParams;
+ (id)descriptor;
@end
