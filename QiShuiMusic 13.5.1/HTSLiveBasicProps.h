@interface HTSLiveBasicProps : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray titleArray;
@property (nonatomic) Q titleArray_Count;
@property (nonatomic) NSMutableArray descArray;
@property (nonatomic) Q descArray_Count;
@property (nonatomic) NSMutableArray iconSrcArray;
@property (nonatomic) Q iconSrcArray_Count;
@property (nonatomic) q duration;
+ (id)descriptor;
@end
