@interface HTSLiveQuizTemplate : IESLivePBBaseMessage
@property (nonatomic) NSString id_p;
@property (nonatomic) NSString title;
@property (nonatomic) NSMutableArray optionsArray;
@property (nonatomic) Q optionsArray_Count;
@property (nonatomic) q duration;
@property (nonatomic) q divisionId;
+ (id)descriptor;
@end
