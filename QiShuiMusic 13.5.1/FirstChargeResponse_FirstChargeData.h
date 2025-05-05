@interface FirstChargeResponse_FirstChargeData : IESLivePBBaseMessage
@property (nonatomic) BOOL isFirstCharge;
@property (nonatomic) NSMutableArray diamondArray;
@property (nonatomic) Q diamondArray_Count;
@property (nonatomic) FirstChargeResponse_FirstChargeExtra extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) NSMutableArray firstChargePackageArray;
@property (nonatomic) Q firstChargePackageArray_Count;
+ (id)descriptor;
@end
