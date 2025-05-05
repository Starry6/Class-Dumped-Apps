@interface HTSLivePaidLiveData : IESLivePBBaseMessage
@property (nonatomic) NSInteger paidType;
@property (nonatomic) NSInteger viewRight;
@property (nonatomic) q duration;
@property (nonatomic) HTSLiveTicketData ticketSession;
@property (nonatomic) BOOL hasTicketSession;
@property (nonatomic) HTSLiveOrderData orderData;
@property (nonatomic) BOOL hasOrderData;
@property (nonatomic) NSInteger delivery;
@property (nonatomic) BOOL needDeliveryNotice;
@property (nonatomic) NSInteger anchorRight;
@property (nonatomic) NSInteger payAbType;
@property (nonatomic) NSMutableArray privilegeInfoArray;
@property (nonatomic) Q privilegeInfoArray_Count;
@property (nonatomic) NSMutableDictionary privilegeInfoMap;
@property (nonatomic) Q privilegeInfoMap_Count;
@property (nonatomic) HTSLiveAsyncAuthData asyncAuthData;
@property (nonatomic) BOOL hasAsyncAuthData;
@property (nonatomic) ProductsData productsData;
@property (nonatomic) BOOL hasProductsData;
@property (nonatomic) q maxPreviewDuration;
+ (id)descriptor;
@end
