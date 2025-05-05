@interface PopularStatusResponse_PopularStatus : IESLivePBBaseMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString prompt;
@property (nonatomic) NSInteger localStatus;
@property (nonatomic) GPBInt64Array optionsArray;
@property (nonatomic) Q optionsArray_Count;
@property (nonatomic) NSInteger recommendStatus;
+ (id)descriptor;
@end
