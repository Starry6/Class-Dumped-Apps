@interface GetAudioBGResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray bgListArray;
@property (nonatomic) Q bgListArray_Count;
@property (nonatomic) NSInteger ugcAvailable;
@property (nonatomic) NSString preChoice;
@property (nonatomic) NSMutableArray animatedExtsArray;
@property (nonatomic) Q animatedExtsArray_Count;
@property (nonatomic) NSMutableArray imageExtsArray;
@property (nonatomic) Q imageExtsArray_Count;
+ (id)descriptor;
@end
