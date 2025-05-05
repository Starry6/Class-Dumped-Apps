@interface IESECProductListUpdateMessage : GPBMessage
@property (nonatomic) q updateTimestamp;
@property (nonatomic) NSString updateToast;
@property (nonatomic) NSMutableArray updateProductInfoArray;
@property (nonatomic) Q updateProductInfoArray_Count;
@property (nonatomic) q total;
@property (nonatomic) NSMutableArray updateCategoryInfoArray;
@property (nonatomic) Q updateCategoryInfoArray_Count;
@property (nonatomic) NSInteger msgType;
+ (id)descriptor;
@end
