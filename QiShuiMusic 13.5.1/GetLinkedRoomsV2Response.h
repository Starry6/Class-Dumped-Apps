@interface GetLinkedRoomsV2Response : IESLivePBBaseMessage
@property (nonatomic) LinkedRoomsV2Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
