@interface IESLiveKtvAtmosphereVideoInfo : IESLivePBBaseMessage
@property (nonatomic) NSString vid;
@property (nonatomic) NSString playAuthToken;
@property (nonatomic) NSInteger videoType;
@property (nonatomic) NSMutableArray frameColorDataArray;
@property (nonatomic) Q frameColorDataArray_Count;
@property (nonatomic) NSMutableArray videoURLArray;
@property (nonatomic) Q videoURLArray_Count;
+ (id)descriptor;
@end
